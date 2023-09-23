#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__TypeConverterAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeConverterAttribute::*)()>(&System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x278645c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeConverterAttribute::*)(System::Type)>(&System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27864b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeConverterAttribute::*)(::StringW)>(&System::ComponentModel::TypeConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27864fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute.get_ConverterTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeConverterAttribute::*)()>(&System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2786524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            "get_ConverterTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverterAttribute::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::TypeConverterAttribute::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x278652c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::TypeConverterAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::TypeConverterAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::TypeConverterAttribute::*)()>(&System::ComponentModel::TypeConverterAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27865ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::TypeConverterAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void System::ComponentModel::TypeConverterAttribute::__set_Default(System::ComponentModel::TypeConverterAttribute value)  {
::cordl_internals::setStaticField<System::ComponentModel::TypeConverterAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get>(std::forward<System::ComponentModel::TypeConverterAttribute>(value));
}
 System::ComponentModel::TypeConverterAttribute System::ComponentModel::TypeConverterAttribute::__get_Default()  {
return ::cordl_internals::getStaticField<System::ComponentModel::TypeConverterAttribute, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get>();
}
constexpr void System::ComponentModel::TypeConverterAttribute::__set__ConverterTypeName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::ComponentModel::TypeConverterAttribute::__get__ConverterTypeName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::ComponentModel::TypeConverterAttribute::TypeConverterAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeConverterAttribute>())) {}
 void System::ComponentModel::TypeConverterAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
 System::ComponentModel::TypeConverterAttribute::TypeConverterAttribute(System::Type type)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeConverterAttribute>(type))) {}
 void System::ComponentModel::TypeConverterAttribute::_ctor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }]
 System::ComponentModel::TypeConverterAttribute::TypeConverterAttribute(::StringW typeName)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeConverterAttribute>(typeName))) {}
 void System::ComponentModel::TypeConverterAttribute::_ctor(::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeName);
}
 ::StringW System::ComponentModel::TypeConverterAttribute::get_ConverterTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            "get_ConverterTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::ComponentModel::TypeConverterAttribute::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t System::ComponentModel::TypeConverterAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::TypeConverterAttribute>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
