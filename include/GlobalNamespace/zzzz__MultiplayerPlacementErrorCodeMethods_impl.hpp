#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCodeMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerPlacementErrorCodeMethods.ToConnectionFailedReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ConnectionFailedReason (*)(GlobalNamespace::MultiplayerPlacementErrorCode)>(&GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xdac3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlacementErrorCodeMethods>::get(),
                            "ToConnectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlacementErrorCode>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason(GlobalNamespace::MultiplayerPlacementErrorCode errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPlacementErrorCodeMethods>::get(),
                            "ToConnectionFailedReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MultiplayerPlacementErrorCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ConnectionFailedReason, false>(nullptr, ___internal_method, errorCode);
}
