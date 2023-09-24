#pragma once
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Bone_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Eyes_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__PoseState_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Pose_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::*)(System::Int32Enum, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Int32Enum UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::Process(System::Int32Enum value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum> UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::TouchState (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::*)(UnityEngine::InputSystem::LowLevel::TouchState, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::LowLevel::TouchState UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::Process(UnityEngine::InputSystem::LowLevel::TouchState value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::TouchState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::TouchState, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::LowLevel::TouchState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::PoseState (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::*)(UnityEngine::InputSystem::XR::PoseState, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::XR::PoseState UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::Process(UnityEngine::InputSystem::XR::PoseState value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::XR::PoseState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::PoseState, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::PoseState>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Input::Pose (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::*)(UnityEngine::XR::OpenXR::Input::Pose, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::Input::Pose UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::Process(UnityEngine::XR::OpenXR::Input::Pose value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Input::Pose, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Pose>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Input::Haptic (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::*)(UnityEngine::XR::OpenXR::Input::Haptic, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::Input::Haptic UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::Process(UnityEngine::XR::OpenXR::Input::Haptic value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::Haptic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Input::Haptic, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::XR::OpenXR::Input::Haptic>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Eyes (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::*)(UnityEngine::InputSystem::XR::Eyes, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::XR::Eyes UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::Process(UnityEngine::InputSystem::XR::Eyes value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::XR::Eyes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Eyes, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Eyes>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Bone (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::*)(UnityEngine::InputSystem::XR::Bone, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::XR::Bone UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::Process(UnityEngine::InputSystem::XR::Bone value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::XR::Bone>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Bone, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::InputSystem::XR::Bone>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::*)(UnityEngine::Quaternion, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Quaternion UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::Process(UnityEngine::Quaternion value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Quaternion>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<double_t>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::InputProcessor_1<double_t>::*)(double_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<double_t>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<double_t>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<double_t>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<double_t>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<double_t>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<double_t>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<double_t>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<double_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<double_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<double_t>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<double_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<double_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 double_t UnityEngine::InputSystem::InputProcessor_1<double_t>::Process(double_t value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<double_t>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<double_t>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<double_t>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<double_t>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<double_t>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<double_t> UnityEngine::InputSystem::InputProcessor_1<double_t>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<double_t> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<double_t>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<double_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<double_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(TValue value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<TValue>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<TValue> UnityEngine::InputSystem::InputProcessor_1<TValue>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<TValue>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::*)(UnityEngine::Vector3, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Vector3 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::Process(UnityEngine::Vector3 value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::*)(UnityEngine::Vector2, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Vector2 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::Process(UnityEngine::Vector2 value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2> UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<UnityEngine::Vector2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<float_t>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::InputProcessor_1<float_t>::*)(float_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<float_t>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<float_t>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<float_t>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<float_t>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<float_t>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<float_t>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<float_t>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<float_t>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 float_t UnityEngine::InputSystem::InputProcessor_1<float_t>::Process(float_t value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<float_t>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<float_t>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<float_t>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<float_t>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<float_t>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<float_t> UnityEngine::InputSystem::InputProcessor_1<float_t>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<float_t> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<float_t>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<bool>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputProcessor_1<bool>::*)(bool, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<bool>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<bool>.ProcessAsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputProcessor_1<bool>::*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<bool>::ProcessAsObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<bool>.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<bool>::*)(void*, int32_t, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::InputProcessor_1<bool>::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::InputProcessor_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputProcessor_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputProcessor_1<bool>::*)()>(&UnityEngine::InputSystem::InputProcessor_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::InputSystem::InputProcessor_1<bool>::Process(bool value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<bool>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<bool>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<bool>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<bool>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<bool>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<bool> UnityEngine::InputSystem::InputProcessor_1<bool>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<bool>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 TValue UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(TValue value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputProcessor_1<TValue>::ProcessAsObject(::bs_hook::Il2CppWrapperType value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "ProcessAsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 void UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(void* buffer, int32_t bufferSize, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferSize, control);
}
 UnityEngine::InputSystem::InputProcessor_1<TValue> UnityEngine::InputSystem::InputProcessor_1<TValue>::New_ctor()  {
UnityEngine::InputSystem::InputProcessor_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputProcessor_1<TValue>>())};
return o;
}
 void UnityEngine::InputSystem::InputProcessor_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputProcessor_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
