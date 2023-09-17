#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataComboSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataComboSO.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerBadgeDataComboSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData)>(&::GlobalNamespace::MultiplayerBadgeDataComboSO::GetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d8128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerBadgeDataComboSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataComboSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataComboSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataComboSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataComboSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20d8150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataComboSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t ::GlobalNamespace::MultiplayerBadgeDataComboSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataComboSO>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerBadgeDataComboSO::MultiplayerBadgeDataComboSO()  : ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO(THROW_UNLESS(::il2cpp_utils::New<MultiplayerBadgeDataComboSO>())) {}
 void ::GlobalNamespace::MultiplayerBadgeDataComboSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataComboSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
