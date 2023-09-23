#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__CaretInfo_def.hpp"
#include "TMPro/zzzz__CaretPosition_def.hpp"
//  Writing Method size for method: TMPro::CaretInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::CaretInfo::*)(int32_t, TMPro::CaretPosition)>(&TMPro::CaretInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab1704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::CaretInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::CaretPosition>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "TMPro::CaretPosition", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::CaretInfo::CaretInfo(int32_t index, TMPro::CaretPosition position) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->position = position;
}
constexpr void TMPro::CaretInfo::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::CaretInfo::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void TMPro::CaretInfo::__set_position(TMPro::CaretPosition value)  {
::cordl_internals::setInstanceField<TMPro::CaretPosition, 0x4>(this->__instance, std::forward<TMPro::CaretPosition>(value));
}
constexpr TMPro::CaretPosition TMPro::CaretInfo::__get_position() const {
return ::cordl_internals::getInstanceField<TMPro::CaretPosition, 0x4>(this->__instance);
}
 void TMPro::CaretInfo::_ctor(int32_t index, TMPro::CaretPosition position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::CaretInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::CaretPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, position);
}
