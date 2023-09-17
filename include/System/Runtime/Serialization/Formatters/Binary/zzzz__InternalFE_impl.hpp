#pragma once
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalFE_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalSerializerTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::InternalFE._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::InternalFE::*)()>(&::System::Runtime::Serialization::Formatters::Binary::InternalFE::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2369f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__set_FEtypeFormat(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::FormatterTypeStyle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__get_FEtypeFormat() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::FormatterTypeStyle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__set_FEassemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__get_FEassemblyFormat() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__set_FEsecurityLevel(::System::Runtime::Serialization::Formatters::TypeFilterLevel value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::TypeFilterLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::TypeFilterLevel>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__get_FEsecurityLevel() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::TypeFilterLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__set_FEserializerTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE ::System::Runtime::Serialization::Formatters::Binary::InternalFE::__get_FEserializerTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Runtime::Serialization::Formatters::Binary::InternalFE::InternalFE()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InternalFE>())) {}
 void ::System::Runtime::Serialization::Formatters::Binary::InternalFE::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::InternalFE>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
