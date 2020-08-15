////
//// Created by TakahiroYamaji on 2020/08/15.
////
//
//#include<iostream>
//#include<algorithm>
//typedef long long ll;
//int N;
//ll H[10000];
//int main(){
//    std::cin >> N;
//    for (int i=0;i<N;i++){
//        std::cin >> H[i];
//    }
//    //std::sort(H, H+N);
//    int res = 0;
//    for (int i=0;i<N;i++){
//        for (int j=i+1;j<N;j++){
//            for (int k=j+1;k<N;k++){
//                if (H[i] + H[j] > H[k] && H[j] + H[k] > H[i] && H[k] + H[i] > H[j]){
//                    if (H[i] != H[j] && H[j] != H[k] && H[k] != H[i]){
//                        //std::cout << i << " " << j << " " << k << std::endl;
//                        res++;
//                    }
//
//                }
//            }
//        }
//    }
//    std::cout << res << std::endl;
//}
//
