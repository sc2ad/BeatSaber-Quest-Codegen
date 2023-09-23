#pragma once
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonArrayAttribute_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::JsonArrayAttribute.get_AllowNullItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonArrayAttribute::*)()>(&Newtonsoft::Json::JsonArrayAttribute::get_AllowNullItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c7f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            "get_AllowNullItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonArrayAttribute.set_AllowNullItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonArrayAttribute::*)(bool)>(&Newtonsoft::Json::JsonArrayAttribute::set_AllowNullItems)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24c7f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            "set_AllowNullItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonArrayAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonArrayAttribute::*)()>(&Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c7f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonArrayAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonArrayAttribute::*)(bool)>(&Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c7f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::JsonArrayAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonArrayAttribute::*)(::StringW)>(&Newtonsoft::Json::JsonArrayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c7fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::JsonArrayAttribute::__set__allowNullItems(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Newtonsoft::Json::JsonArrayAttribute::__get__allowNullItems() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Newtonsoft::Json::JsonArrayAttribute::get_AllowNullItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            "get_AllowNullItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Newtonsoft::Json::JsonArrayAttribute::set_AllowNullItems(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            "set_AllowNullItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 Newtonsoft::Json::JsonArrayAttribute::JsonArrayAttribute()  : Newtonsoft::Json::JsonContainerAttribute(THROW_UNLESS(::il2cpp_utils::New<JsonArrayAttribute>())) {}
 void Newtonsoft::Json::JsonArrayAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "allowNullItems", ty: "bool", modifiers: "", def_value: None }]
 Newtonsoft::Json::JsonArrayAttribute::JsonArrayAttribute(bool allowNullItems)  : Newtonsoft::Json::JsonContainerAttribute(THROW_UNLESS(::il2cpp_utils::New<JsonArrayAttribute>(allowNullItems))) {}
 void Newtonsoft::Json::JsonArrayAttribute::_ctor(bool allowNullItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowNullItems);
}
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
 Newtonsoft::Json::JsonArrayAttribute::JsonArrayAttribute(::StringW id)  : Newtonsoft::Json::JsonContainerAttribute(THROW_UNLESS(::il2cpp_utils::New<JsonArrayAttribute>(id))) {}
 void Newtonsoft::Json::JsonArrayAttribute::_ctor(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonArrayAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
