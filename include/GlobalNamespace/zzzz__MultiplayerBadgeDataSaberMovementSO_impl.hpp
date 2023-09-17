#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSaberMovementSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData)>(&::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20da298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20da2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 float_t ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerPlayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::MultiplayerBadgeDataSaberMovementSO()  : ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO(THROW_UNLESS(::il2cpp_utils::New<MultiplayerBadgeDataSaberMovementSO>())) {}
 void ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
