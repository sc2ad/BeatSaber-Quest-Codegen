#pragma once
namespace {
#include "GlobalNamespace/zzzz__OffsetDirectionExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OffsetDirectionExtensions.OppositeDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (*)(::GlobalNamespace::OffsetDirection)>(&::GlobalNamespace::OffsetDirectionExtensions::OppositeDirection)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xd94a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions>::get(),
                            "OppositeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
    return ___internal_method;
  }
};
 ::GlobalNamespace::OffsetDirection ::GlobalNamespace::OffsetDirectionExtensions::OppositeDirection(::GlobalNamespace::OffsetDirection offsetDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OffsetDirectionExtensions>::get(),
                            "OppositeDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(nullptr, ___internal_method, offsetDirection);
}
} // end anonymous namespace
