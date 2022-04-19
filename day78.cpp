// day 77 out of 100
// quick sort

#include <iostream>

using namespace std;

// partition function ah mergesort func. mela dhan eludhanum ena cpp is top to bottom approach software
int partition(int arr[], int f, int l)
{

    // you can run quick sort with taking pivot as any element but here we are taking last as the pivot
    int pivot = arr[l];

    // enga pindex nu onnu create pandrom for partion of the last and element and swapping
    int pIndex = f;

    // less than or greater dhan ah kandupidika oru for loop podrom
    // for loop runs from first element to last or last -1 element
    for (int i = f; i <= l - 1; i++)
    {

        // if arr  index position is less dhan the pivot i.e last positon namma ada index postion ku swap pandrom
        // namma yen index kuda swap pandrom na, apa dhan namma partion ah crct ah center ku kondu vara mudiyum
        if (arr[i] < pivot)
        {
            // basic swapping
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            // namma enga p index odu  value increment pandrom apa dhan p index vechi namma compare panna mudiyum
            pIndex++;
        }
    }
    // enga oru swapping function pannanum to swap the partion i.e the last element in the center place for further steps
    int temp = arr[l];
    arr[l] = arr[pIndex];
    arr[pIndex] = temp;
    // edhu complete panna aprom namma pindex ah return pannanum, ena namma partion index ah dhan call pannom
    //  eppa new p vandhu pindex ah maridum aprm thiripiyum endha recrusive funtion call agum
    return pIndex;
}

// void quicksort nu oru function ah create pandrom, adhoda arguments vandhy arr, first and last index

void quicksort(int arr[], int f, int l)
{
    // first vandhu low index is less than the high index ah nu check pannanum

    if (f < l)
    {

        // int p nu oru partion variable ah create pandrom, ena partion fucntion la use pannanum
        // edhula arguments ah array first and last ah pass pannanum
        int p = partition(arr, f, l);

        // first oru partion ah create pannirukam, adha renda perikanum
        //  so the left half ku arr first same ah irukkum last mattum partition - 1 kudukanum
        quicksort(arr, f, p - 1);

        // right half ku arr last same ah irukkum right ah mattum partition +  1 kudukanum
        quicksort(arr, p + 1, l);
    }
}

int main()
{
    // size of the array intially zero declare pandrom
    int size = 0;
    cout << "enter the size of the array to be sorted : ";
    cin >> size;

    int array[size];

    cout << "Enter"
         << " " << size << " "
         << "integers to be sorted : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "The array before sorting is : ";

    // oru array va print pandrathukum for loop vachu dhan print pannanum illana verum address dhan print pannum
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    // quicksort function ah array oda argument vechi call pandrom

    quicksort(array, 0, (size - 1));

    cout << endl;

    cout << "The array after sorting is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
