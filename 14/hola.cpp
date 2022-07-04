void merge(T* arreglo, int low, int high, int mid)
{
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) 
    {
        if (arreglo[i] < arreglo[j]) 
        {
            c[k] = arreglo[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arreglo[j];
            k++;
            j++;
        }
    }
    while (i <= mid) 
    {
        c[k] = arreglo[i];
        k++;
        i++;
    }
    while (j <= high) 
    {
        c[k] = arreglo[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) 
        arreglo[i] = c[i];
}