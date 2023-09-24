#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleDissolve_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
//  Writing Method size for method: GlobalNamespace::ObstacleDissolve.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2245c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ObstacleDissolve.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::OnDestroy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2245cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ObstacleDissolve.HandleObstacleDidInitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(GlobalNamespace::ObstacleControllerBase)>(&GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2245e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "HandleObstacleDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleControllerBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ObstacleDissolve.HandleObcstacleDidStartDissolvingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)(GlobalNamespace::ObstacleControllerBase, float_t)>(&GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2245e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "HandleObcstacleDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleControllerBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ObstacleDissolve._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleDissolve::*)()>(&GlobalNamespace::ObstacleDissolve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2245ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ObstacleDissolve::__set__obstacleController(GlobalNamespace::ObstacleControllerBase value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ObstacleControllerBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ObstacleControllerBase>(value));
}
constexpr GlobalNamespace::ObstacleControllerBase GlobalNamespace::ObstacleDissolve::__get__obstacleController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ObstacleControllerBase, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ObstacleDissolve::__set__cutoutAnimateEffect(GlobalNamespace::CutoutAnimateEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CutoutAnimateEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CutoutAnimateEffect>(value));
}
constexpr GlobalNamespace::CutoutAnimateEffect GlobalNamespace::ObstacleDissolve::__get__cutoutAnimateEffect() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CutoutAnimateEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ObstacleDissolve::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ObstacleDissolve::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::ObstacleDissolve::HandleObstacleDidInitEvent(GlobalNamespace::ObstacleControllerBase obstacleController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "HandleObstacleDidInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleControllerBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController);
}
 void GlobalNamespace::ObstacleDissolve::HandleObcstacleDidStartDissolvingEvent(GlobalNamespace::ObstacleControllerBase obstacleController, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            "HandleObcstacleDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleControllerBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleController, duration);
}
 GlobalNamespace::ObstacleDissolve GlobalNamespace::ObstacleDissolve::New_ctor()  {
GlobalNamespace::ObstacleDissolve o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ObstacleDissolve>())};
return o;
}
 void GlobalNamespace::ObstacleDissolve::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ObstacleDissolve>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
