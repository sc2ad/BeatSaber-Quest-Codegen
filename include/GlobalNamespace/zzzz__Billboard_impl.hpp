#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Billboard_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode::GlobalNamespace__Billboard__RotationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__Billboard__RotationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__Billboard__RotationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode  GlobalNamespace::GlobalNamespace__Billboard__RotationMode::AllAxis{0};
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode  GlobalNamespace::GlobalNamespace__Billboard__RotationMode::XAxis{1};
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode  GlobalNamespace::GlobalNamespace__Billboard__RotationMode::YAxis{2};
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode  GlobalNamespace::GlobalNamespace__Billboard__RotationMode::ZAxis{3};
//  Writing Method size for method: GlobalNamespace::Billboard.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Billboard::*)()>(&GlobalNamespace::Billboard::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f750c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Billboard.OnWillRenderObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Billboard::*)()>(&GlobalNamespace::Billboard::OnWillRenderObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1f750e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            "OnWillRenderObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Billboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Billboard::*)()>(&GlobalNamespace::Billboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f751b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Billboard::__set__rotationMode(GlobalNamespace::GlobalNamespace__Billboard__RotationMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__Billboard__RotationMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__Billboard__RotationMode>(value));
}
constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode GlobalNamespace::Billboard::__get__rotationMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__Billboard__RotationMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::Billboard::__set__flipDirection(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::Billboard::__get__flipDirection() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::Billboard::__set__transform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::Billboard::__get__transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::Billboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::Billboard::OnWillRenderObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            "OnWillRenderObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::Billboard::Billboard()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<Billboard>())) {}
 void GlobalNamespace::Billboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Billboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
