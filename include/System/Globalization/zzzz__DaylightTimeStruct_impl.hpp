#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Globalization/zzzz__DaylightTimeStruct_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::System::Globalization::DaylightTimeStruct._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DaylightTimeStruct::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan)>(&::System::Globalization::DaylightTimeStruct::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23e51f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTimeStruct>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Start", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "Delta", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::DaylightTimeStruct::DaylightTimeStruct(::System::DateTime Start, ::System::DateTime End, ::System::TimeSpan Delta) noexcept : ::bs_hook::ValueTypeWrapper() {this->Start = Start;
this->End = End;
this->Delta = Delta;
}
constexpr void ::System::Globalization::DaylightTimeStruct::__set_Start(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x0>(this->__instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Globalization::DaylightTimeStruct::__get_Start() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x0>(this->__instance);
}
constexpr void ::System::Globalization::DaylightTimeStruct::__set_End(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x8>(this->__instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Globalization::DaylightTimeStruct::__get_End() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x8>(this->__instance);
}
constexpr void ::System::Globalization::DaylightTimeStruct::__set_Delta(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x10>(this->__instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Globalization::DaylightTimeStruct::__get_Delta() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x10>(this->__instance);
}
 void ::System::Globalization::DaylightTimeStruct::_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTimeStruct>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, start, end, delta);
}
} // end anonymous namespace
