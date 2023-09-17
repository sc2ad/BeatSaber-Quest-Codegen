#pragma once
#include "RootMotion/FinalIK/zzzz__Poser_impl.hpp"
namespace {
#include "RootMotion/FinalIK/zzzz__HandPoser_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser.AutoMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::AutoMapping)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1200b64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::HandPoser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser.InitiatePoser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::InitiatePoser)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1200c20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::HandPoser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser.FixPoserTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::FixPoserTransforms)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1200dc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::HandPoser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser.UpdatePoser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::UpdatePoser)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1200eac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::RootMotion::FinalIK::HandPoser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser.StoreDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::StoreDefaultState)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1200c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "StoreDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::HandPoser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::HandPoser::*)()>(&::RootMotion::FinalIK::HandPoser::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12011dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::RootMotion::FinalIK::HandPoser::__set_children(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::HandPoser::__get_children() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::HandPoser::__set__poseRoot(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::RootMotion::FinalIK::HandPoser::__get__poseRoot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::HandPoser::__set_poseChildren(::ArrayW<::UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform> ::RootMotion::FinalIK::HandPoser::__get_poseChildren() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::HandPoser::__set_defaultLocalPositions(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::RootMotion::FinalIK::HandPoser::__get_defaultLocalPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::RootMotion::FinalIK::HandPoser::__set_defaultLocalRotations(::ArrayW<::UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Quaternion>>(value));
}
constexpr ::ArrayW<::UnityEngine::Quaternion> ::RootMotion::FinalIK::HandPoser::__get_defaultLocalRotations() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Quaternion>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::RootMotion::FinalIK::HandPoser::AutoMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "AutoMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::HandPoser::InitiatePoser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "InitiatePoser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::HandPoser::FixPoserTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "FixPoserTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::HandPoser::UpdatePoser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "UpdatePoser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::RootMotion::FinalIK::HandPoser::StoreDefaultState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            "StoreDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::RootMotion::FinalIK::HandPoser::HandPoser()  : ::RootMotion::FinalIK::Poser(THROW_UNLESS(::il2cpp_utils::New<HandPoser>())) {}
 void ::RootMotion::FinalIK::HandPoser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::HandPoser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
