#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/ComponentModel/Design/Serialization/zzzz__RootDesignerSerializerAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)(::StringW, ::StringW, bool)>(&::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27a8a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_SerializerBaseTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(&::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a8ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                            "get_SerializerBaseTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_TypeId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(&::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27a8ad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__set__typeId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__get__typeId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__set__Reloadable_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__get__Reloadable_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__set__SerializerTypeName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__get__SerializerTypeName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__set__SerializerBaseTypeName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__get__SerializerBaseTypeName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "serializerTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseSerializerTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "reloadable", ty: "bool", modifiers: "", def_value: None }]
 ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::RootDesignerSerializerAttribute(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<RootDesignerSerializerAttribute>(serializerTypeName, baseSerializerTypeName, reloadable))) {}
 void ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializerTypeName, baseSerializerTypeName, reloadable);
}
 ::StringW ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                            "get_SerializerBaseTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute>::get(),
                            "get_TypeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
