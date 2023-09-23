#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataGoodCutsSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerBadgeDataGoodCutsSO.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::*)(GlobalNamespace::MultiplayerPlayerResultsData)>(&GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::GetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20d864c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MultiplayerBadgeDataGoodCutsSO),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataGoodCutsSO>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerBadgeDataGoodCutsSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::*)()>(&GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20d8674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataGoodCutsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int32_t GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::GetValue(GlobalNamespace::MultiplayerPlayerResultsData result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataGoodCutsSO>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlayerResultsData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, result);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::MultiplayerBadgeDataGoodCutsSO()  : GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO(THROW_UNLESS(::il2cpp_utils::New<MultiplayerBadgeDataGoodCutsSO>())) {}
 void GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerBadgeDataGoodCutsSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
