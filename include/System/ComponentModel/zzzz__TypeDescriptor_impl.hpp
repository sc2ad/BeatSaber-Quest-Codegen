#pragma once
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/ComponentModel/zzzz__RefreshEventHandler_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::*)(::ArrayW<System::Attribute>, System::Collections::ICollection)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27a0e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::*)(::ArrayW<System::Attribute>)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27a0dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::__set__filter(::ArrayW<System::Attribute> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Attribute>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Attribute>>(value));
}
constexpr ::ArrayW<System::Attribute> System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::__get__filter() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Attribute>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::__set_FilteredMembers(System::Collections::ICollection value)  {
::cordl_internals::setInstanceField<System::Collections::ICollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ICollection>(value));
}
constexpr System::Collections::ICollection System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::__get_FilteredMembers() const {
return ::cordl_internals::getInstanceField<System::Collections::ICollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "filter", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }, CppParam { name: "filteredMembers", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem(::ArrayW<System::Attribute> filter, System::Collections::ICollection filteredMembers)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem>(filter, filteredMembers))) {}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::_ctor(::ArrayW<System::Attribute> filter, System::Collections::ICollection filteredMembers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, filter, filteredMembers);
}
 bool System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem::IsValid(::ArrayW<System::Attribute> filter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__AttributeFilterCacheItem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, filter);
}
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::*)(System::ComponentModel::Design::ITypeDescriptorFilterService, System::Collections::ICollection)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27a0e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::Design::ITypeDescriptorFilterService>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::*)(System::ComponentModel::Design::ITypeDescriptorFilterService)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27a0e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::Design::ITypeDescriptorFilterService>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::__set__filterService(System::ComponentModel::Design::ITypeDescriptorFilterService value)  {
::cordl_internals::setInstanceField<System::ComponentModel::Design::ITypeDescriptorFilterService, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::Design::ITypeDescriptorFilterService>(value));
}
constexpr System::ComponentModel::Design::ITypeDescriptorFilterService System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::__get__filterService() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::Design::ITypeDescriptorFilterService, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::__set_FilteredMembers(System::Collections::ICollection value)  {
::cordl_internals::setInstanceField<System::Collections::ICollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ICollection>(value));
}
constexpr System::Collections::ICollection System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::__get_FilteredMembers() const {
return ::cordl_internals::getInstanceField<System::Collections::ICollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "filterService", ty: "System::ComponentModel::Design::ITypeDescriptorFilterService", modifiers: "", def_value: None }, CppParam { name: "filteredMembers", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::System__ComponentModel__TypeDescriptor__FilterCacheItem(System::ComponentModel::Design::ITypeDescriptorFilterService filterService, System::Collections::ICollection filteredMembers)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__TypeDescriptor__FilterCacheItem>(filterService, filteredMembers))) {}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::_ctor(System::ComponentModel::Design::ITypeDescriptorFilterService filterService, System::Collections::ICollection filteredMembers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::Design::ITypeDescriptorFilterService>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, filterService, filteredMembers);
}
 bool System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem::IsValid(System::ComponentModel::Design::ITypeDescriptorFilterService filterService)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__FilterCacheItem>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::Design::ITypeDescriptorFilterService>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, filterService);
}
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27a1334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a14a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IComparer
constexpr  System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::operator System::Collections::IComparer() const noexcept {
return System::Collections::IComparer(::bs_hook::Il2CppWrapperType::instance);
}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::__set_Instance(System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer value)  {
::cordl_internals::setStaticField<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get>(std::forward<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>(value));
}
 System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::__get_Instance()  {
return ::cordl_internals::getStaticField<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get>();
}
 int32_t System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::Compare(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, left, right);
}
// Ctor Parameters []
 System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>())) {}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MemberDescriptorComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)(System::ComponentModel::ICustomTypeDescriptor, System::ComponentModel::ICustomTypeDescriptor)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x279f570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ICustomTypeDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ICustomTypeDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27a150c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a161c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a1734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::TypeConverter (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a184c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a1964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptor (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a1a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)(System::Type)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x27a1b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a1d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27a1e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)()>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27a1f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27a20a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::*)(System::ComponentModel::PropertyDescriptor)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x27a21d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr  System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::operator System::ComponentModel::ICustomTypeDescriptor() const noexcept {
return System::ComponentModel::ICustomTypeDescriptor(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::__set__primary(System::ComponentModel::ICustomTypeDescriptor value)  {
::cordl_internals::setInstanceField<System::ComponentModel::ICustomTypeDescriptor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::ICustomTypeDescriptor>(value));
}
constexpr System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::__get__primary() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::ICustomTypeDescriptor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::__set__secondary(System::ComponentModel::ICustomTypeDescriptor value)  {
::cordl_internals::setInstanceField<System::ComponentModel::ICustomTypeDescriptor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::ICustomTypeDescriptor>(value));
}
constexpr System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::__get__secondary() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::ICustomTypeDescriptor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "primary", ty: "System::ComponentModel::ICustomTypeDescriptor", modifiers: "", def_value: None }, CppParam { name: "secondary", ty: "System::ComponentModel::ICustomTypeDescriptor", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor(System::ComponentModel::ICustomTypeDescriptor primary, System::ComponentModel::ICustomTypeDescriptor secondary)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>(primary, secondary))) {}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::_ctor(System::ComponentModel::ICustomTypeDescriptor primary, System::ComponentModel::ICustomTypeDescriptor secondary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ICustomTypeDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ICustomTypeDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, primary, secondary);
}
 System::ComponentModel::AttributeCollection System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::TypeConverter System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::TypeConverter, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::EventDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::PropertyDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptor, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, editorBaseType);
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, attributes);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__MergedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, pd);
}
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a2424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x27a26f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x27a29cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27a2c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::TypeConverter (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27a2e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27a30c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptor (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x27a32d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(System::Type)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27a34dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x27a3784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x27a3a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27a3d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x27a3ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(System::ComponentModel::PropertyDescriptor)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x1228;
  constexpr static std::size_t addrs = 0x27a42a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr  GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::operator System::ComponentModel::ICustomTypeDescriptor() const {
return System::ComponentModel::ICustomTypeDescriptor(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_node", ty: "System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode _node, ::bs_hook::Il2CppWrapperType _instance) noexcept : ::bs_hook::ValueTypeWrapper() {this->_node = _node;
this->_instance = _instance;
}
constexpr void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__set__node(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value)  {
::cordl_internals::setInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x0>(this->__instance, std::forward<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>(value));
}
constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__get__node() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__set__instance(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__get__instance() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x8>(this->__instance);
}
 void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode node, ::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, node, instance);
}
 System::ComponentModel::AttributeCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::TypeConverter GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::TypeConverter, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::EventDescriptor GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::PropertyDescriptor GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptor, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, editorBaseType);
}
 System::ComponentModel::EventDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::EventDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, attributes);
}
 System::ComponentModel::PropertyDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::PropertyDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, attributes);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pd);
}
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, System::Type, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27a54cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x27a54d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x27a5780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27a59bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::TypeConverter (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27a5bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptor (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27a5e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptor (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x27a6088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(System::Type)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27a6298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27a6544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27a67f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x27a6aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<System::Attribute>)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x27a6d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(System::ComponentModel::PropertyDescriptor)>(&GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x27a7004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ComponentModel::ICustomTypeDescriptor
constexpr  GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::operator System::ComponentModel::ICustomTypeDescriptor() const {
return System::ComponentModel::ICustomTypeDescriptor(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "_node", ty: "System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_objectType", ty: "System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_instance", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode _node, System::Type _objectType, ::bs_hook::Il2CppWrapperType _instance) noexcept : ::bs_hook::ValueTypeWrapper() {this->_node = _node;
this->_objectType = _objectType;
this->_instance = _instance;
}
constexpr void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__set__node(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value)  {
::cordl_internals::setInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x0>(this->__instance, std::forward<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>(value));
}
constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__get__node() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__set__objectType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x8>(this->__instance, std::forward<System::Type>(value));
}
constexpr System::Type GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__get__objectType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__set__instance(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__get__instance() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->__instance);
}
 void GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode node, System::Type objectType, ::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, node, objectType, instance);
}
 System::ComponentModel::AttributeCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetClassName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetComponentName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::TypeConverter GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::TypeConverter, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::EventDescriptor GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptor, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::PropertyDescriptor GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptor, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(System::Type editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, editorBaseType);
}
 System::ComponentModel::EventDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::EventDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, attributes);
}
 System::ComponentModel::PropertyDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::ComponentModel::PropertyDescriptorCollection GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, attributes);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(System::ComponentModel::PropertyDescriptor pd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::System__ComponentModel__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                            "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::PropertyDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pd);
}
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(System::ComponentModel::TypeDescriptionProvider)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x279aa5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::TypeDescriptionProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode.GetCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27a2308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode.GetExtendedTypeDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ICustomTypeDescriptor (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27a2378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode.GetExtenderProviders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::ComponentModel::IExtenderProvider> (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27a242c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode.GetReflectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27a249c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode.GetTypeDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ICustomTypeDescriptor (System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x27a2578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::__set_Next(System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode value)  {
::cordl_internals::setInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>(value));
}
constexpr System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::__get_Next() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::__set_Provider(System::ComponentModel::TypeDescriptionProvider value)  {
::cordl_internals::setInstanceField<System::ComponentModel::TypeDescriptionProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::TypeDescriptionProvider>(value));
}
constexpr System::ComponentModel::TypeDescriptionProvider System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::__get_Provider() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::TypeDescriptionProvider, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "provider", ty: "System::ComponentModel::TypeDescriptionProvider", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::System__ComponentModel__TypeDescriptor__TypeDescriptionNode(System::ComponentModel::TypeDescriptionProvider provider)  : System::ComponentModel::TypeDescriptionProvider(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__TypeDescriptor__TypeDescriptionNode>(provider))) {}
 void System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::_ctor(System::ComponentModel::TypeDescriptionProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::TypeDescriptionProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provider);
}
 System::Collections::IDictionary System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetCache(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            "GetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method, instance);
}
 System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            "GetExtendedTypeDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ICustomTypeDescriptor, false>(const_cast<void*>(instance), ___internal_method, instance);
}
 ::ArrayW<System::ComponentModel::IExtenderProvider> System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            "GetExtenderProviders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::ComponentModel::IExtenderProvider>, false>(const_cast<void*>(instance), ___internal_method, instance);
}
 System::Type System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetReflectionType(System::Type objectType, ::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            "GetReflectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, objectType, instance);
}
 System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor(System::Type objectType, ::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode>::get(),
                            "GetTypeDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ICustomTypeDescriptor, false>(const_cast<void*>(instance), ___internal_method, objectType, instance);
}
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.get_ComObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)()>(&System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x279a190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_ComObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.get_InterfaceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)()>(&System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x279a1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_InterfaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.get_MetadataVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x279a268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_MetadataVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.AddProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::ComponentModel::TypeDescriptionProvider, System::Type)>(&System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x279a2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "AddProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::TypeDescriptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x279b0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "CheckDefaultProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.FilterMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList (*)(System::Collections::IList, ::ArrayW<System::Attribute>)>(&System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x279b6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "FilterMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetAssociation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Type, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x278bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAssociation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x278fabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27987f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::AttributeCollection (*)(::bs_hook::Il2CppWrapperType, bool)>(&System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x279bb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x279458c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetConverter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::TypeConverter (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x279f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ICustomTypeDescriptor (*)(System::Type, ::StringW)>(&System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x279baa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ICustomTypeDescriptor (*)(::bs_hook::Il2CppWrapperType, bool)>(&System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x279bfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::ICustomTypeDescriptor (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x279c1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetExtendedDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2798a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x27989f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::EventDescriptorCollection (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>, bool)>(&System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x279f59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetExtenderCollisionSuffix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::ComponentModel::MemberDescriptor)>(&System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x27a00d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetExtenderCollisionSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27a03e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetNodeForBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2798c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2798bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(::bs_hook::Il2CppWrapperType, bool)>(&System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27a04bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>)>(&System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2787b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>, bool)>(&System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27a0b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetPropertiesImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>, bool, bool)>(&System::ComponentModel::TypeDescriptor::GetPropertiesImpl)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x27a0528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetPropertiesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetProviderRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::TypeDescriptionProvider (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27a0be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProviderRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.GetReflectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x278a4ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetReflectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x279f518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode (*)(System::Type, bool)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x279a544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode (*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x279f3d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode (*)(::bs_hook::Il2CppWrapperType, bool)>(&System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27a0c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(int32_t, System::Collections::ICollection, ::ArrayW<System::Attribute>, ::bs_hook::Il2CppWrapperType, System::Collections::IDictionary)>(&System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x279fa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineAttributeFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.PipelineFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(int32_t, System::Collections::ICollection, ::bs_hook::Il2CppWrapperType, System::Collections::IDictionary)>(&System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x18fc;
  constexpr static std::size_t addrs = 0x279d3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.PipelineInitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(int32_t, System::Collections::ICollection, System::Collections::IDictionary)>(&System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x279ecc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.PipelineMerge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (*)(int32_t, System::Collections::ICollection, System::Collections::ICollection, ::bs_hook::Il2CppWrapperType, System::Collections::IDictionary)>(&System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  constexpr static std::size_t size = 0x1144;
  constexpr static std::size_t addrs = 0x279c284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineMerge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.RaiseRefresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27a0e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "RaiseRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type)>(&System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x279aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.ShouldHideMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ComponentModel::MemberDescriptor, System::Attribute)>(&System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x279ba10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "ShouldHideMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Attribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeDescriptor.SortDescriptorArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::IList)>(&System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27a0f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "SortDescriptorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::ComponentModel::TypeDescriptor::__set__providerTable(System::ComponentModel::WeakHashtable value)  {
::cordl_internals::setStaticField<System::ComponentModel::WeakHashtable, "_providerTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::ComponentModel::WeakHashtable>(value));
}
 System::ComponentModel::WeakHashtable System::ComponentModel::TypeDescriptor::__get__providerTable()  {
return ::cordl_internals::getStaticField<System::ComponentModel::WeakHashtable, "_providerTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__providerTypeTable(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "_providerTypeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::ComponentModel::TypeDescriptor::__get__providerTypeTable()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "_providerTypeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__defaultProviders(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "_defaultProviders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::ComponentModel::TypeDescriptor::__get__defaultProviders()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "_defaultProviders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__associationTable(System::ComponentModel::WeakHashtable value)  {
::cordl_internals::setStaticField<System::ComponentModel::WeakHashtable, "_associationTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::ComponentModel::WeakHashtable>(value));
}
 System::ComponentModel::WeakHashtable System::ComponentModel::TypeDescriptor::__get__associationTable()  {
return ::cordl_internals::getStaticField<System::ComponentModel::WeakHashtable, "_associationTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__metadataVersion(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<int32_t>(value));
}
 int32_t System::ComponentModel::TypeDescriptor::__get__metadataVersion()  {
return ::cordl_internals::getStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__collisionIndex(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<int32_t>(value));
}
 int32_t System::ComponentModel::TypeDescriptor::__get__collisionIndex()  {
return ::cordl_internals::getStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set_TraceDescriptor(System::Diagnostics::BooleanSwitch value)  {
::cordl_internals::setStaticField<System::Diagnostics::BooleanSwitch, "TraceDescriptor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::Diagnostics::BooleanSwitch>(value));
}
 System::Diagnostics::BooleanSwitch System::ComponentModel::TypeDescriptor::__get_TraceDescriptor()  {
return ::cordl_internals::getStaticField<System::Diagnostics::BooleanSwitch, "TraceDescriptor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__pipelineInitializeKeys(::ArrayW<System::Guid> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Guid>, "_pipelineInitializeKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<::ArrayW<System::Guid>>(value));
}
 ::ArrayW<System::Guid> System::ComponentModel::TypeDescriptor::__get__pipelineInitializeKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Guid>, "_pipelineInitializeKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__pipelineMergeKeys(::ArrayW<System::Guid> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Guid>, "_pipelineMergeKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<::ArrayW<System::Guid>>(value));
}
 ::ArrayW<System::Guid> System::ComponentModel::TypeDescriptor::__get__pipelineMergeKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Guid>, "_pipelineMergeKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__pipelineFilterKeys(::ArrayW<System::Guid> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Guid>, "_pipelineFilterKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<::ArrayW<System::Guid>>(value));
}
 ::ArrayW<System::Guid> System::ComponentModel::TypeDescriptor::__get__pipelineFilterKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Guid>, "_pipelineFilterKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__pipelineAttributeFilterKeys(::ArrayW<System::Guid> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Guid>, "_pipelineAttributeFilterKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<::ArrayW<System::Guid>>(value));
}
 ::ArrayW<System::Guid> System::ComponentModel::TypeDescriptor::__get__pipelineAttributeFilterKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Guid>, "_pipelineAttributeFilterKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set__internalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::TypeDescriptor::__get__internalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 void System::ComponentModel::TypeDescriptor::__set_Refreshed(System::ComponentModel::RefreshEventHandler value)  {
::cordl_internals::setStaticField<System::ComponentModel::RefreshEventHandler, "Refreshed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>(std::forward<System::ComponentModel::RefreshEventHandler>(value));
}
 System::ComponentModel::RefreshEventHandler System::ComponentModel::TypeDescriptor::__get_Refreshed()  {
return ::cordl_internals::getStaticField<System::ComponentModel::RefreshEventHandler, "Refreshed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get>();
}
 System::Type System::ComponentModel::TypeDescriptor::get_ComObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_ComObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method);
}
 System::Type System::ComponentModel::TypeDescriptor::get_InterfaceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_InterfaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method);
}
 int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "get_MetadataVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void System::ComponentModel::TypeDescriptor::AddProvider(System::ComponentModel::TypeDescriptionProvider provider, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "AddProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::TypeDescriptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
 void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "CheckDefaultProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 System::Collections::ArrayList System::ComponentModel::TypeDescriptor::FilterMembers(System::Collections::IList members, ::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "FilterMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ArrayList, false>(nullptr, ___internal_method, members, attributes);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::TypeDescriptor::GetAssociation(System::Type type, ::bs_hook::Il2CppWrapperType primary)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAssociation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, type, primary);
}
 System::ComponentModel::AttributeCollection System::ComponentModel::TypeDescriptor::GetAttributes(System::Type componentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(nullptr, ___internal_method, componentType);
}
 System::ComponentModel::AttributeCollection System::ComponentModel::TypeDescriptor::GetAttributes(::bs_hook::Il2CppWrapperType component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(nullptr, ___internal_method, component);
}
 System::ComponentModel::AttributeCollection System::ComponentModel::TypeDescriptor::GetAttributes(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::AttributeCollection, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
 System::Collections::IDictionary System::ComponentModel::TypeDescriptor::GetCache(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(nullptr, ___internal_method, instance);
}
 System::ComponentModel::TypeConverter System::ComponentModel::TypeDescriptor::GetConverter(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetConverter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::TypeConverter, false>(nullptr, ___internal_method, type);
}
 System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::TypeDescriptor::GetDescriptor(System::Type type, ::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ICustomTypeDescriptor, false>(nullptr, ___internal_method, type, typeName);
}
 System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::TypeDescriptor::GetDescriptor(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ICustomTypeDescriptor, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
 System::ComponentModel::ICustomTypeDescriptor System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::bs_hook::Il2CppWrapperType component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetExtendedDescriptor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::ICustomTypeDescriptor, false>(nullptr, ___internal_method, component);
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::TypeDescriptor::GetEvents(System::Type componentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(nullptr, ___internal_method, componentType);
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::TypeDescriptor::GetEvents(::bs_hook::Il2CppWrapperType component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(nullptr, ___internal_method, component);
}
 System::ComponentModel::EventDescriptorCollection System::ComponentModel::TypeDescriptor::GetEvents(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::EventDescriptorCollection, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
 ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(System::ComponentModel::MemberDescriptor member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetExtenderCollisionSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, member);
}
 System::Type System::ComponentModel::TypeDescriptor::GetNodeForBaseType(System::Type searchType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetNodeForBaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, searchType);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetProperties(System::Type componentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, componentType);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetProperties(::bs_hook::Il2CppWrapperType component)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, component);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetProperties(::bs_hook::Il2CppWrapperType component, bool noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetProperties(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, component, attributes);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetProperties(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::bs_hook::Il2CppWrapperType component, ::ArrayW<System::Attribute> attributes, bool noCustomTypeDesc, bool noAttributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetPropertiesImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
 System::ComponentModel::TypeDescriptionProvider System::ComponentModel::TypeDescriptor::GetProviderRecursive(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetProviderRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::TypeDescriptionProvider, false>(nullptr, ___internal_method, type);
}
 System::Type System::ComponentModel::TypeDescriptor::GetReflectionType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "GetReflectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(nullptr, ___internal_method, type);
}
 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode System::ComponentModel::TypeDescriptor::NodeFor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, false>(nullptr, ___internal_method, type);
}
 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode System::ComponentModel::TypeDescriptor::NodeFor(System::Type type, bool createDelegator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, false>(nullptr, ___internal_method, type, createDelegator);
}
 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode System::ComponentModel::TypeDescriptor::NodeFor(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, false>(nullptr, ___internal_method, instance);
}
 System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode System::ComponentModel::TypeDescriptor::NodeFor(::bs_hook::Il2CppWrapperType instance, bool createDelegator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "NodeFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeDescriptor__TypeDescriptionNode, false>(nullptr, ___internal_method, instance, createDelegator);
}
 System::Collections::ICollection System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t pipelineType, System::Collections::ICollection members, ::ArrayW<System::Attribute> filter, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineAttributeFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
 System::Collections::ICollection System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t pipelineType, System::Collections::ICollection members, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
 System::Collections::ICollection System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t pipelineType, System::Collections::ICollection members, System::Collections::IDictionary cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineInitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, pipelineType, members, cache);
}
 System::Collections::ICollection System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t pipelineType, System::Collections::ICollection primary, System::Collections::ICollection secondary, ::bs_hook::Il2CppWrapperType instance, System::Collections::IDictionary cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "PipelineMerge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
 void System::ComponentModel::TypeDescriptor::RaiseRefresh(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "RaiseRefresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 void System::ComponentModel::TypeDescriptor::Refresh(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
 bool System::ComponentModel::TypeDescriptor::ShouldHideMember(System::ComponentModel::MemberDescriptor member, System::Attribute attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "ShouldHideMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::MemberDescriptor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Attribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member, attribute);
}
 void System::ComponentModel::TypeDescriptor::SortDescriptorArray(System::Collections::IList infos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeDescriptor>::get(),
                            "SortDescriptorArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos);
}
