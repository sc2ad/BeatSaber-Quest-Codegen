#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__DesignTimeVisibleAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DesignTimeVisibleAttribute::*)(bool)>(&::System::ComponentModel::DesignTimeVisibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x277be9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.get_Visible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::get_Visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277bec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            "get_Visible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)(::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::DesignTimeVisibleAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x277becc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::DesignTimeVisibleAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x277bf64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::DesignTimeVisibleAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DesignTimeVisibleAttribute.IsDefaultAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DesignTimeVisibleAttribute::*)()>(&::System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x277c000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::DesignTimeVisibleAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::ComponentModel::DesignTimeVisibleAttribute::__set__Visible_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::ComponentModel::DesignTimeVisibleAttribute::__get__Visible_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::ComponentModel::DesignTimeVisibleAttribute::__set_Yes(::System::ComponentModel::DesignTimeVisibleAttribute value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>(std::forward<::System::ComponentModel::DesignTimeVisibleAttribute>(value));
}
 ::System::ComponentModel::DesignTimeVisibleAttribute ::System::ComponentModel::DesignTimeVisibleAttribute::__get_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>();
}
 void ::System::ComponentModel::DesignTimeVisibleAttribute::__set_No(::System::ComponentModel::DesignTimeVisibleAttribute value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>(std::forward<::System::ComponentModel::DesignTimeVisibleAttribute>(value));
}
 ::System::ComponentModel::DesignTimeVisibleAttribute ::System::ComponentModel::DesignTimeVisibleAttribute::__get_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>();
}
 void ::System::ComponentModel::DesignTimeVisibleAttribute::__set_Default(::System::ComponentModel::DesignTimeVisibleAttribute value)  {
::cordl_internals::setStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>(std::forward<::System::ComponentModel::DesignTimeVisibleAttribute>(value));
}
 ::System::ComponentModel::DesignTimeVisibleAttribute ::System::ComponentModel::DesignTimeVisibleAttribute::__get_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::DesignTimeVisibleAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get>();
}
// Ctor Parameters [CppParam { name: "visible", ty: "bool", modifiers: "", def_value: None }]
 ::System::ComponentModel::DesignTimeVisibleAttribute::DesignTimeVisibleAttribute(bool visible)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DesignTimeVisibleAttribute>(visible))) {}
 void ::System::ComponentModel::DesignTimeVisibleAttribute::_ctor(bool visible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visible);
}
 bool ::System::ComponentModel::DesignTimeVisibleAttribute::get_Visible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            "get_Visible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::ComponentModel::DesignTimeVisibleAttribute::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::System::ComponentModel::DesignTimeVisibleAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::ComponentModel::DesignTimeVisibleAttribute::IsDefaultAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DesignTimeVisibleAttribute>::get(),
                            "IsDefaultAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
