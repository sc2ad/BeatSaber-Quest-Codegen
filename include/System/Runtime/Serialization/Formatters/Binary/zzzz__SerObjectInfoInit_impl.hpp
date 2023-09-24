#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoInit_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::*)()>(&System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x235ef94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_seenBeforeTable(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_seenBeforeTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_objectInfoIdCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_objectInfoIdCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__set_oiPool(System::Runtime::Serialization::Formatters::Binary::SerStack value)  {
::cordl_internals::setInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Serialization::Formatters::Binary::SerStack>(value));
}
constexpr System::Runtime::Serialization::Formatters::Binary::SerStack System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::__get_oiPool() const {
return ::cordl_internals::getInstanceField<System::Runtime::Serialization::Formatters::Binary::SerStack, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::New_ctor()  {
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit>())};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
