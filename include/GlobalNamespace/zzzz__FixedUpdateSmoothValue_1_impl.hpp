#pragma once
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1::*)(float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1.SetStartValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1::*)(T)>(&GlobalNamespace::FixedUpdateSmoothValue_1::SetStartValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1::*)(T)>(&GlobalNamespace::FixedUpdateSmoothValue_1::FixedUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (GlobalNamespace::FixedUpdateSmoothValue_1::*)(float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (GlobalNamespace::FixedUpdateSmoothValue_1::*)(T, T, float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1::Interpolate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FixedUpdateSmoothValue_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1::__set__currentSmoothedValue(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::FixedUpdateSmoothValue_1::__get__currentSmoothedValue() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1::__set__prevSmoothedValue(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::FixedUpdateSmoothValue_1::__get__prevSmoothedValue() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1::__set__smooth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FixedUpdateSmoothValue_1::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "smooth", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::FixedUpdateSmoothValue_1::FixedUpdateSmoothValue_1(float_t smooth)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FixedUpdateSmoothValue_1>(smooth))) {}
 void GlobalNamespace::FixedUpdateSmoothValue_1::_ctor(float_t smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, smooth);
}
 void GlobalNamespace::FixedUpdateSmoothValue_1::SetStartValue(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FixedUpdateSmoothValue_1::FixedUpdate(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 T GlobalNamespace::FixedUpdateSmoothValue_1::GetValue(float_t interpolationFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, interpolationFactor);
}
 T GlobalNamespace::FixedUpdateSmoothValue_1::Interpolate(T value0, T value1, float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, value0, value1, t);
}
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::*)(float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>.SetStartValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::*)(UnityEngine::Vector3)>(&GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::SetStartValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::*)(UnityEngine::Vector3)>(&GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::FixedUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::*)(float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::*)(UnityEngine::Vector3, UnityEngine::Vector3, float_t)>(&GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::Interpolate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__set__currentSmoothedValue(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__get__currentSmoothedValue() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__set__prevSmoothedValue(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__get__prevSmoothedValue() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__set__smooth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "smooth", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::FixedUpdateSmoothValue_1(float_t smooth)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FixedUpdateSmoothValue_1>(smooth))) {}
 void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::_ctor(float_t smooth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, smooth);
}
 void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::SetStartValue(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "SetStartValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::FixedUpdate(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::GetValue(float_t interpolationFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, interpolationFactor);
}
 UnityEngine::Vector3 GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>::Interpolate(UnityEngine::Vector3 value0, UnityEngine::Vector3 value1, float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, value0, value1, t);
}
