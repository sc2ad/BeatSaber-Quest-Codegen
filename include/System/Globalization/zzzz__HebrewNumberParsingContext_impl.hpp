#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
//  Writing Method size for method: ::System::Globalization::HebrewNumberParsingContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::HebrewNumberParsingContext::*)(int32_t)>(&::System::Globalization::HebrewNumberParsingContext::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23e3414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "state", ty: "::System::Globalization::____System__Globalization__HebrewNumber__HS", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::HebrewNumberParsingContext::HebrewNumberParsingContext(::System::Globalization::____System__Globalization__HebrewNumber__HS state, int32_t result) noexcept : ::bs_hook::ValueTypeWrapper() {this->state = state;
this->result = result;
}
constexpr void ::System::Globalization::HebrewNumberParsingContext::__set_state(::System::Globalization::____System__Globalization__HebrewNumber__HS value)  {
::cordl_internals::setInstanceField<::System::Globalization::____System__Globalization__HebrewNumber__HS, 0x0>(this->__instance, std::forward<::System::Globalization::____System__Globalization__HebrewNumber__HS>(value));
}
constexpr ::System::Globalization::____System__Globalization__HebrewNumber__HS ::System::Globalization::HebrewNumberParsingContext::__get_state() const {
return ::cordl_internals::getInstanceField<::System::Globalization::____System__Globalization__HebrewNumber__HS, 0x0>(this->__instance);
}
constexpr void ::System::Globalization::HebrewNumberParsingContext::__set_result(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::HebrewNumberParsingContext::__get_result() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
 void ::System::Globalization::HebrewNumberParsingContext::_ctor(int32_t result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::HebrewNumberParsingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
} // end anonymous namespace
