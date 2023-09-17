#pragma once
#include "UnityEngine/Events/zzzz__InvokableCall_1_impl.hpp"
namespace {
#include "UnityEngine/Events/zzzz__CachedInvokableCall_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1::*)(::UnityEngine::Object, ::System::Reflection::MethodInfo, T)>(&::UnityEngine::Events::CachedInvokableCall_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::UnityEngine::Events::CachedInvokableCall_1::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1::*)(T)>(&::UnityEngine::Events::CachedInvokableCall_1::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::CachedInvokableCall_1::__set_m_Arg1(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T ::UnityEngine::Events::CachedInvokableCall_1::__get_m_Arg1() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "T", modifiers: "", def_value: None }]
 ::UnityEngine::Events::CachedInvokableCall_1::CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, T argument)  : ::UnityEngine::Events::InvokableCall_1<T>(THROW_UNLESS(::il2cpp_utils::New<CachedInvokableCall_1>(target, theFunction, argument))) {}
 void ::UnityEngine::Events::CachedInvokableCall_1::_ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, T argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction, argument);
}
 void ::UnityEngine::Events::CachedInvokableCall_1::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void ::UnityEngine::Events::CachedInvokableCall_1::Invoke(T arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0);
}
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<int32_t>::*)(::UnityEngine::Object, ::System::Reflection::MethodInfo, int32_t)>(&::UnityEngine::Events::CachedInvokableCall_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<int32_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<int32_t>::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::UnityEngine::Events::CachedInvokableCall_1<int32_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<int32_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<int32_t>::*)(int32_t)>(&::UnityEngine::Events::CachedInvokableCall_1<int32_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::__set_m_Arg1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::__get_m_Arg1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, int32_t argument)  : ::UnityEngine::Events::InvokableCall_1<int32_t>(THROW_UNLESS(::il2cpp_utils::New<CachedInvokableCall_1>(target, theFunction, argument))) {}
 void ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::_ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, int32_t argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction, argument);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<int32_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<int32_t>::Invoke(int32_t arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<int32_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0);
}
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<bool>::*)(::UnityEngine::Object, ::System::Reflection::MethodInfo, bool)>(&::UnityEngine::Events::CachedInvokableCall_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<bool>::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::UnityEngine::Events::CachedInvokableCall_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<bool>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<bool>::*)(bool)>(&::UnityEngine::Events::CachedInvokableCall_1<bool>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::CachedInvokableCall_1<bool>::__set_m_Arg1(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::Events::CachedInvokableCall_1<bool>::__get_m_Arg1() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "bool", modifiers: "", def_value: None }]
 ::UnityEngine::Events::CachedInvokableCall_1<bool>::CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, bool argument)  : ::UnityEngine::Events::InvokableCall_1<bool>(THROW_UNLESS(::il2cpp_utils::New<CachedInvokableCall_1>(target, theFunction, argument))) {}
 void ::UnityEngine::Events::CachedInvokableCall_1<bool>::_ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, bool argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction, argument);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<bool>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<bool>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<bool>::Invoke(bool arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<bool>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0);
}
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<float_t>::*)(::UnityEngine::Object, ::System::Reflection::MethodInfo, float_t)>(&::UnityEngine::Events::CachedInvokableCall_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<float_t>::*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::UnityEngine::Events::CachedInvokableCall_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Events::CachedInvokableCall_1<float_t>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Events::CachedInvokableCall_1<float_t>::*)(float_t)>(&::UnityEngine::Events::CachedInvokableCall_1<float_t>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Events::CachedInvokableCall_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Events::CachedInvokableCall_1<float_t>::__set_m_Arg1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Events::CachedInvokableCall_1<float_t>::__get_m_Arg1() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "theFunction", ty: "::System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "argument", ty: "float_t", modifiers: "", def_value: None }]
 ::UnityEngine::Events::CachedInvokableCall_1<float_t>::CachedInvokableCall_1(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, float_t argument)  : ::UnityEngine::Events::InvokableCall_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<CachedInvokableCall_1>(target, theFunction, argument))) {}
 void ::UnityEngine::Events::CachedInvokableCall_1<float_t>::_ctor(::UnityEngine::Object target, ::System::Reflection::MethodInfo theFunction, float_t argument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, theFunction, argument);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<float_t>::Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args);
}
 void ::UnityEngine::Events::CachedInvokableCall_1<float_t>::Invoke(float_t arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::CachedInvokableCall_1<float_t>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arg0);
}
} // end anonymous namespace
