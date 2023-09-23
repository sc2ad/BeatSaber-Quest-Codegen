#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DesignOnlyAttribute_def.hpp"
//  Writing Method size for method: System::ComponentModel::DesignOnlyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::DesignOnlyAttribute::*)(bool)>(&System::ComponentModel::DesignOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2771a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DesignOnlyAttribute.get_IsDesignOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2771a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            "get_IsDesignOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DesignOnlyAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::DesignOnlyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2771aa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::DesignOnlyAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DesignOnlyAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2771b88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::DesignOnlyAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DesignOnlyAttribute.IsDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignOnlyAttribute::*)()>(&System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2771ba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::DesignOnlyAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::DesignOnlyAttribute::__set__IsDesignOnly_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::ComponentModel::DesignOnlyAttribute::__get__IsDesignOnly_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::ComponentModel::DesignOnlyAttribute::__set_Yes(System::ComponentModel::DesignOnlyAttribute value)  {
::cordl_internals::setStaticField<System::ComponentModel::DesignOnlyAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>(std::forward<System::ComponentModel::DesignOnlyAttribute>(value));
}
 System::ComponentModel::DesignOnlyAttribute System::ComponentModel::DesignOnlyAttribute::__get_Yes()  {
return ::cordl_internals::getStaticField<System::ComponentModel::DesignOnlyAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>();
}
 void System::ComponentModel::DesignOnlyAttribute::__set_No(System::ComponentModel::DesignOnlyAttribute value)  {
::cordl_internals::setStaticField<System::ComponentModel::DesignOnlyAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>(std::forward<System::ComponentModel::DesignOnlyAttribute>(value));
}
 System::ComponentModel::DesignOnlyAttribute System::ComponentModel::DesignOnlyAttribute::__get_No()  {
return ::cordl_internals::getStaticField<System::ComponentModel::DesignOnlyAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>();
}
 void System::ComponentModel::DesignOnlyAttribute::__set_Default(System::ComponentModel::DesignOnlyAttribute value)  {
::cordl_internals::setStaticField<System::ComponentModel::DesignOnlyAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>(std::forward<System::ComponentModel::DesignOnlyAttribute>(value));
}
 System::ComponentModel::DesignOnlyAttribute System::ComponentModel::DesignOnlyAttribute::__get_Default()  {
return ::cordl_internals::getStaticField<System::ComponentModel::DesignOnlyAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get>();
}
// Ctor Parameters [CppParam { name: "isDesignOnly", ty: "bool", modifiers: "", def_value: None }]
 System::ComponentModel::DesignOnlyAttribute::DesignOnlyAttribute(bool isDesignOnly)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DesignOnlyAttribute>(isDesignOnly))) {}
 void System::ComponentModel::DesignOnlyAttribute::_ctor(bool isDesignOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isDesignOnly);
}
 bool System::ComponentModel::DesignOnlyAttribute::get_IsDesignOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            "get_IsDesignOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::DesignOnlyAttribute::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::ComponentModel::DesignOnlyAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::DesignOnlyAttribute::IsDefaultAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DesignOnlyAttribute>::get(),
                            "IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
