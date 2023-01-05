
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no_of_queries, storage = 0, output_pkt_size;
    int input_pkt_size, bucket_size, size_left;
    cout << "Enter no of queries:";
    cin >> no_of_queries;
    cout << "Enter the bucket size:";
    cin >> bucket_size;
    cout << "Enter output packet  size:";
    cin >> output_pkt_size;

    for (int i = 0; i < no_of_queries; i++)
    {
        cout << "Enter input packet size:";
        cin >> input_pkt_size;
        size_left = bucket_size - storage;
        if (input_pkt_size <= size_left)
        {

            storage += input_pkt_size;
        }
        else
        {
            cout << "Packet loss = " << input_pkt_size << endl;
        }
        cout << "Buffer size=" << storage << " out of bucket size=" << bucket_size << endl;
        storage -= output_pkt_size;
        if (storage < 0)
            storage = 0;
        cout << "after output new buffer size=" << storage << endl;
    }
    return 0;
}
