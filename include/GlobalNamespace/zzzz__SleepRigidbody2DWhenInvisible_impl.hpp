#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SleepRigidbody2DWhenInvisible_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(&::GlobalNamespace::SleepRigidbody2DWhenInvisible::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f7b6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible.OnBecameInvisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(&::GlobalNamespace::SleepRigidbody2DWhenInvisible::OnBecameInvisible)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f7b6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            "OnBecameInvisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SleepRigidbody2DWhenInvisible._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SleepRigidbody2DWhenInvisible::*)()>(&::GlobalNamespace::SleepRigidbody2DWhenInvisible::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f7b710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SleepRigidbody2DWhenInvisible::__set__rigidbody2D(::UnityEngine::Rigidbody2D value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rigidbody2D>(value));
}
constexpr ::UnityEngine::Rigidbody2D ::GlobalNamespace::SleepRigidbody2DWhenInvisible::__get__rigidbody2D() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody2D, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SleepRigidbody2DWhenInvisible::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SleepRigidbody2DWhenInvisible::OnBecameInvisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            "OnBecameInvisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SleepRigidbody2DWhenInvisible::SleepRigidbody2DWhenInvisible()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SleepRigidbody2DWhenInvisible>())) {}
 void ::GlobalNamespace::SleepRigidbody2DWhenInvisible::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SleepRigidbody2DWhenInvisible>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
