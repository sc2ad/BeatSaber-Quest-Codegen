#pragma once
#include "Zenject/zzzz__MonoKernel_impl.hpp"
namespace {
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SceneContextRegistry_def.hpp"
#include "Zenject/zzzz__ZenjectSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::*)()>(&::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0._ForceUnloadAllScenes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::*)(::Zenject::SceneContext)>(&::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::_ForceUnloadAllScenes_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d9d534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "<ForceUnloadAllScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9d5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d9d608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene> ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__get_sceneOrder() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__set___9__0(::System::Func_2<::Zenject::SceneContext,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Zenject::SceneContext,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::Zenject::SceneContext,int32_t>>(value));
}
constexpr ::System::Func_2<::Zenject::SceneContext,int32_t> ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Zenject::SceneContext,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::____Zenject__ProjectKernel____c__DisplayClass4_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Zenject__ProjectKernel____c__DisplayClass4_0>())) {}
 void ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::_ForceUnloadAllScenes_b__0(::Zenject::SceneContext x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "<ForceUnloadAllScenes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 ::Zenject::InjectTypeInfo ::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::____Zenject__ProjectKernel____c__DisplayClass4_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::Zenject::ProjectKernel.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d9ca28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.DestroyEverythingInOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::DestroyEverythingInOrder)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d9ca50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "DestroyEverythingInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.ForceUnloadAllScenes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)(bool)>(&::Zenject::ProjectKernel::ForceUnloadAllScenes)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2d9cae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "ForceUnloadAllScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ProjectKernel::*)()>(&::Zenject::ProjectKernel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9cf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::ProjectKernel::__zenFieldSetter0)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d9cf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenFieldSetter1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::Zenject::ProjectKernel::__zenFieldSetter1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2d9d064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ProjectKernel.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::ProjectKernel::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2d9d198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::ProjectKernel::__set__settings(::Zenject::ZenjectSettings value)  {
::cordl_internals::setInstanceField<::Zenject::ZenjectSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::ZenjectSettings>(value));
}
constexpr ::Zenject::ZenjectSettings ::Zenject::ProjectKernel::__get__settings() const {
return ::cordl_internals::getInstanceField<::Zenject::ZenjectSettings, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::ProjectKernel::__set__contextRegistry(::Zenject::SceneContextRegistry value)  {
::cordl_internals::setInstanceField<::Zenject::SceneContextRegistry, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::SceneContextRegistry>(value));
}
constexpr ::Zenject::SceneContextRegistry ::Zenject::ProjectKernel::__get__contextRegistry() const {
return ::cordl_internals::getInstanceField<::Zenject::SceneContextRegistry, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Zenject::ProjectKernel::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::ProjectKernel::DestroyEverythingInOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "DestroyEverythingInOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param immediate: bool (default: false)
 void ::Zenject::ProjectKernel::ForceUnloadAllScenes(bool immediate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "ForceUnloadAllScenes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, immediate);
}
// Ctor Parameters []
 ::Zenject::ProjectKernel::ProjectKernel()  : ::Zenject::MonoKernel(THROW_UNLESS(::il2cpp_utils::New<ProjectKernel>())) {}
 void ::Zenject::ProjectKernel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::ProjectKernel::__zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenFieldSetter0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 void ::Zenject::ProjectKernel::__zenFieldSetter1(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenFieldSetter1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 ::Zenject::InjectTypeInfo ::Zenject::ProjectKernel::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ProjectKernel>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
