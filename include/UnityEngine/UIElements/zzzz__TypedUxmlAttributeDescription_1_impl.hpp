#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::*)(T)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::__set__defaultValue_k__BackingField(T value)  {
::cordl_internals::setInstanceField<T, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<T, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 T ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 T ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::set_defaultValue(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::__set__defaultValue_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 int32_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::set_defaultValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)(bool)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::__set__defaultValue_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 bool ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::set_defaultValue(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::__set__defaultValue_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 float_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::set_defaultValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)(int64_t)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::__set__defaultValue_k__BackingField(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int64_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 int64_t ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::set_defaultValue(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>.GetValueFromBag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Int32Enum (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::*)(::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::GetValueFromBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>.get_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Int32Enum (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::get_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>.set_defaultValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::*)(::System::Int32Enum)>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::set_defaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::*)()>(&::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::__set__defaultValue_k__BackingField(::System::Int32Enum value)  {
::cordl_internals::setInstanceField<::System::Int32Enum, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Int32Enum>(value));
}
constexpr ::System::Int32Enum ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::__get__defaultValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Int32Enum, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Int32Enum ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            "GetValueFromBag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method, bag, cc);
}
 ::System::Int32Enum ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::get_defaultValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            "get_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::set_defaultValue(::System::Int32Enum value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            "set_defaultValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::TypedUxmlAttributeDescription_1()  : ::UnityEngine::UIElements::UxmlAttributeDescription(THROW_UNLESS(::il2cpp_utils::New<TypedUxmlAttributeDescription_1>())) {}
 void ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<::System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
