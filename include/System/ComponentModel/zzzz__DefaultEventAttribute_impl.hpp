#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DefaultEventAttribute_def.hpp"
//  Writing Method size for method: System::ComponentModel::DefaultEventAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::DefaultEventAttribute::*)(::StringW)>(&System::ComponentModel::DefaultEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x277baf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DefaultEventAttribute.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DefaultEventAttribute::*)()>(&System::ComponentModel::DefaultEventAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277bb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DefaultEventAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DefaultEventAttribute::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::DefaultEventAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x277bb20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::DefaultEventAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::DefaultEventAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::DefaultEventAttribute::*)()>(&System::ComponentModel::DefaultEventAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277bba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::DefaultEventAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::DefaultEventAttribute::__set__Name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::ComponentModel::DefaultEventAttribute::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::ComponentModel::DefaultEventAttribute::__set_Default(System::ComponentModel::DefaultEventAttribute value)  {
::cordl_internals::setStaticField<System::ComponentModel::DefaultEventAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get>(std::forward<System::ComponentModel::DefaultEventAttribute>(value));
}
 System::ComponentModel::DefaultEventAttribute System::ComponentModel::DefaultEventAttribute::__get_Default()  {
return ::cordl_internals::getStaticField<System::ComponentModel::DefaultEventAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get>();
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 System::ComponentModel::DefaultEventAttribute::DefaultEventAttribute(::StringW name)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DefaultEventAttribute>(name))) {}
 void System::ComponentModel::DefaultEventAttribute::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::StringW System::ComponentModel::DefaultEventAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::DefaultEventAttribute::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::ComponentModel::DefaultEventAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::DefaultEventAttribute>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
