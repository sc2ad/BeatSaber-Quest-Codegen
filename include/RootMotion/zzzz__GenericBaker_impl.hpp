#pragma once
#include "RootMotion/zzzz__Baker_impl.hpp"
namespace {
#include "RootMotion/zzzz__GenericBaker_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "RootMotion/zzzz__BakerTransform_def.hpp"
//  Writing Method size for method: ::RootMotion::GenericBaker.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)()>(&::RootMotion::GenericBaker::Awake)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x11a6b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.GetCharacterRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::RootMotion::GenericBaker::*)()>(&::RootMotion::GenericBaker::GetCharacterRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a6fac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::GenericBaker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.OnStartBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)()>(&::RootMotion::GenericBaker::OnStartBaking)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x11a6fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::GenericBaker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.OnSetLoopFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)(float_t)>(&::RootMotion::GenericBaker::OnSetLoopFrame)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11a71a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::GenericBaker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.OnSetCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)(ByRef<::UnityEngine::AnimationClip>)>(&::RootMotion::GenericBaker::OnSetCurves)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11a7404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::GenericBaker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.OnSetKeyframes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)(float_t, bool)>(&::RootMotion::GenericBaker::OnSetKeyframes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11a771c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::GenericBaker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.IsIgnored
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::GenericBaker::*)(::UnityEngine::Transform)>(&::RootMotion::GenericBaker::IsIgnored)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11a6da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "IsIgnored",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker.BakePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::GenericBaker::*)(::UnityEngine::Transform)>(&::RootMotion::GenericBaker::BakePosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x11a6e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "BakePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::GenericBaker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::GenericBaker::*)()>(&::RootMotion::GenericBaker::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11a797c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::GenericBaker::__set_markAsLegacy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::RootMotion::GenericBaker::__get_markAsLegacy() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_root(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::GenericBaker::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_rootNode(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::GenericBaker::__get_rootNode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_ignoreList(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::GenericBaker::__get_ignoreList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_bakePositionList(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::GenericBaker::__get_bakePositionList() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_children(::ArrayW<::RootMotion::BakerTransform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::RootMotion::BakerTransform>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::RootMotion::BakerTransform>>(value));
}
constexpr ::ArrayW<::RootMotion::BakerTransform> ::RootMotion::GenericBaker::__get_children() const {
return ::cordl_internals::getInstanceField<::ArrayW<::RootMotion::BakerTransform>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_rootChild(::RootMotion::BakerTransform value)  {
::cordl_internals::setInstanceField<::RootMotion::BakerTransform, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::RootMotion::BakerTransform>(value));
}
constexpr ::RootMotion::BakerTransform ::RootMotion::GenericBaker::__get_rootChild() const {
return ::cordl_internals::getInstanceField<::RootMotion::BakerTransform, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::GenericBaker::__set_rootChildIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::GenericBaker::__get_rootChildIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::GenericBaker::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Transform ::RootMotion::GenericBaker::GetCharacterRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "GetCharacterRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::GenericBaker::OnStartBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "OnStartBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::GenericBaker::OnSetLoopFrame(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "OnSetLoopFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void ::RootMotion::GenericBaker::OnSetCurves(ByRef<::UnityEngine::AnimationClip> clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "OnSetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
 void ::RootMotion::GenericBaker::OnSetKeyframes(float_t time, bool lastFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "OnSetKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, lastFrame);
}
 bool ::RootMotion::GenericBaker::IsIgnored(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "IsIgnored",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t);
}
 bool ::RootMotion::GenericBaker::BakePosition(::UnityEngine::Transform t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            "BakePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t);
}
// Ctor Parameters []
 ::RootMotion::GenericBaker::GenericBaker()  : ::RootMotion::Baker(THROW_UNLESS(::il2cpp_utils::New<GenericBaker>())) {}
 void ::RootMotion::GenericBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::GenericBaker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
