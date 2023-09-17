#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__ComCompatibleVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComCompatibleVersionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComCompatibleVersionAttribute::*)(int32_t, int32_t, int32_t, int32_t)>(&::System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x236afa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComCompatibleVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__major(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__major() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__minor(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__minor() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__build(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__build() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__set__revision(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::__get__revision() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "major", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::ComCompatibleVersionAttribute(int32_t major, int32_t minor, int32_t build, int32_t revision)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ComCompatibleVersionAttribute>(major, minor, build, revision))) {}
 void ::System::Runtime::InteropServices::ComCompatibleVersionAttribute::_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComCompatibleVersionAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, major, minor, build, revision);
}
} // end anonymous namespace
