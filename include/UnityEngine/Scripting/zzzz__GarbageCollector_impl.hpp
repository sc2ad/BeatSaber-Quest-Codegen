#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Scripting/zzzz__GarbageCollector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::UnityEngine__Scripting__GarbageCollector__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode  UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::Disabled{0};
constexpr UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode  UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::Enabled{1};
constexpr UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode  UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode::Manual{2};
//  Writing Method size for method: UnityEngine::Scripting::GarbageCollector.set_GCMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode)>(&UnityEngine::Scripting::GarbageCollector::set_GCMode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2b71a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "set_GCMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Scripting::GarbageCollector.SetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode)>(&UnityEngine::Scripting::GarbageCollector::SetMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b71b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Scripting::GarbageCollector.GetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode (*)()>(&UnityEngine::Scripting::GarbageCollector::GetMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b71af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "GetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Scripting::GarbageCollector::__set_GCModeChanged(System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>, "GCModeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get>(std::forward<System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>>(value));
}
 System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode> UnityEngine::Scripting::GarbageCollector::__get_GCModeChanged()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>, "GCModeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get>();
}
 void UnityEngine::Scripting::GarbageCollector::set_GCMode(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "set_GCMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void UnityEngine::Scripting::GarbageCollector::SetMode(UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "SetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mode);
}
 UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode UnityEngine::Scripting::GarbageCollector::GetMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::GarbageCollector>::get(),
                            "GetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Scripting::UnityEngine__Scripting__GarbageCollector__Mode, false>(nullptr, ___internal_method);
}
