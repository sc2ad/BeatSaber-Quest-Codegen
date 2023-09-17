#pragma once
namespace {
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
constexpr void ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__set__next(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry>(value));
}
constexpr ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__get__next() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__set__key(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__get__key() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__set__handler(::System::Delegate value)  {
::cordl_internals::setInstanceField<::System::Delegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Delegate>(value));
}
constexpr ::System::Delegate ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry::__get__handler() const {
return ::cordl_internals::getInstanceField<::System::Delegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate (::System::ComponentModel::EventHandlerList::*)(::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::EventHandlerList::get_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x277244c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.Find
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry (::System::ComponentModel::EventHandlerList::*)(::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::EventHandlerList::Find)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27724ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::ComponentModel::EventHandlerList::__set__head(::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry>(value));
}
constexpr ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry ::System::ComponentModel::EventHandlerList::__get__head() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::EventHandlerList::__set__parent(::System::ComponentModel::Component value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::Component, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ComponentModel::Component>(value));
}
constexpr ::System::ComponentModel::Component ::System::ComponentModel::EventHandlerList::__get__parent() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::Component, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Delegate ::System::ComponentModel::EventHandlerList::get_Item(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate, false>(const_cast<void*>(instance), ___internal_method, key);
}
 ::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry ::System::ComponentModel::EventHandlerList::Find(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::EventHandlerList>::get(),
                            "Find",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::____System__ComponentModel__EventHandlerList__ListEntry, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
