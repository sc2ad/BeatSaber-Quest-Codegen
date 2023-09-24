#pragma once
#include "Oculus/Platform/zzzz__IAP_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
//  Writing Method size for method: Oculus::Platform::IAP.ConsumePurchase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request (*)(::StringW)>(&Oculus::Platform::IAP::ConsumePurchase)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25954ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "ConsumePurchase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.GetProductsBySKU
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> (*)(::ArrayW<::StringW>)>(&Oculus::Platform::IAP::GetProductsBySKU)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x259563c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetProductsBySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.GetViewerPurchases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> (*)()>(&Oculus::Platform::IAP::GetViewerPurchases)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x25957b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetViewerPurchases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.GetViewerPurchasesDurableCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> (*)()>(&Oculus::Platform::IAP::GetViewerPurchasesDurableCache)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2595910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetViewerPurchasesDurableCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.LaunchCheckoutFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase> (*)(::StringW)>(&Oculus::Platform::IAP::LaunchCheckoutFlow)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2595a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "LaunchCheckoutFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.GetNextProductListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> (*)(Oculus::Platform::Models::ProductList)>(&Oculus::Platform::IAP::GetNextProductListPage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2595c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetNextProductListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ProductList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::IAP.GetNextPurchaseListPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> (*)(Oculus::Platform::Models::PurchaseList)>(&Oculus::Platform::IAP::GetNextPurchaseListPage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2595e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetNextPurchaseListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::PurchaseList>::get()}
                        )));
    return ___internal_method;
  }
};
 Oculus::Platform::Request Oculus::Platform::IAP::ConsumePurchase(::StringW sku)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "ConsumePurchase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request, false>(nullptr, ___internal_method, sku);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> Oculus::Platform::IAP::GetProductsBySKU(::ArrayW<::StringW> skus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetProductsBySKU",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList>, false>(nullptr, ___internal_method, skus);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> Oculus::Platform::IAP::GetViewerPurchases()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetViewerPurchases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> Oculus::Platform::IAP::GetViewerPurchasesDurableCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetViewerPurchasesDurableCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList>, false>(nullptr, ___internal_method);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase> Oculus::Platform::IAP::LaunchCheckoutFlow(::StringW sku)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "LaunchCheckoutFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::Purchase>, false>(nullptr, ___internal_method, sku);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList> Oculus::Platform::IAP::GetNextProductListPage(Oculus::Platform::Models::ProductList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetNextProductListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::ProductList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::ProductList>, false>(nullptr, ___internal_method, list);
}
 Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList> Oculus::Platform::IAP::GetNextPurchaseListPage(Oculus::Platform::Models::PurchaseList list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::IAP>::get(),
                            "GetNextPurchaseListPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Oculus::Platform::Models::PurchaseList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Request_1<Oculus::Platform::Models::PurchaseList>, false>(nullptr, ___internal_method, list);
}
