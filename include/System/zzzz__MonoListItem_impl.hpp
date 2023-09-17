#pragma once
namespace {
#include "System/zzzz__MonoListItem_def.hpp"
//  Writing Method size for method: ::System::MonoListItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoListItem::*)()>(&::System::MonoListItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x248fea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoListItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::MonoListItem::__set_next(::System::MonoListItem value)  {
::cordl_internals::setInstanceField<::System::MonoListItem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::MonoListItem>(value));
}
constexpr ::System::MonoListItem ::System::MonoListItem::__get_next() const {
return ::cordl_internals::getInstanceField<::System::MonoListItem, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::MonoListItem::__set_data(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::MonoListItem::__get_data() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::MonoListItem::MonoListItem()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MonoListItem>())) {}
 void ::System::MonoListItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoListItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
