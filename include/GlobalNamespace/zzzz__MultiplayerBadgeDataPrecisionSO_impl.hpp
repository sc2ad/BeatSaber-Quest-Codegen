#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataPrecisionSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerBadgeDataPrecisionSO.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::MultiplayerBadgeDataPrecisionSO::*)(GlobalNamespace::MultiplayerPlayerResultsData)>(&GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20da24c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerBadgeDataPrecisionSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataPrecisionSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerBadgeDataPrecisionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBadgeDataPrecisionSO::*)()>(&GlobalNamespace::MultiplayerBadgeDataPrecisionSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20da288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataPrecisionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 float_t GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue(GlobalNamespace::MultiplayerPlayerResultsData result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataPrecisionSO>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerBadgeDataPrecisionSO::MultiplayerBadgeDataPrecisionSO()  : GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO(THROW_UNLESS(::il2cpp_utils::New<MultiplayerBadgeDataPrecisionSO>())) {}
 void GlobalNamespace::MultiplayerBadgeDataPrecisionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataPrecisionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
