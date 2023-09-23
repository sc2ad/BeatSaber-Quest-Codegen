#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::*)()>(&GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::Execute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x260a90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Unity::Jobs::IJob
constexpr  GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::operator Unity::Jobs::IJob() const {
return Unity::Jobs::IJob(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Space", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob(GlobalNamespace::OVRSpace Space, Unity::Collections::NativeArray_1<int32_t> Length) noexcept : ::bs_hook::ValueTypeWrapper() {this->Space = Space;
this->Length = Length;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::__set_Space(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::__get_Space() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::__set_Length(Unity::Collections::NativeArray_1<int32_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x8>(this->__instance, std::forward<Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<int32_t> GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::__get_Length() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob.HasBoundaryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::*)()>(&GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::HasBoundaryChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x260a990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "HasBoundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob.SetNaN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Unity::Collections::NativeArray_1<UnityEngine::Vector2>)>(&GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::SetNaN)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x260aa40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "SetNaN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::*)()>(&GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x260aa54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Unity::Jobs::IJob
constexpr  GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::operator Unity::Jobs::IJob() const {
return Unity::Jobs::IJob(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Space", ty: "GlobalNamespace::OVRSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "Boundary", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PreviousBoundary", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::GlobalNamespace__OVRScenePlane__GetBoundaryJob(GlobalNamespace::OVRSpace Space, Unity::Collections::NativeArray_1<UnityEngine::Vector2> Boundary, Unity::Collections::NativeArray_1<UnityEngine::Vector2> PreviousBoundary) noexcept : ::bs_hook::ValueTypeWrapper() {this->Space = Space;
this->Boundary = Boundary;
this->PreviousBoundary = PreviousBoundary;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__set_Space(GlobalNamespace::OVRSpace value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSpace>(value));
}
constexpr GlobalNamespace::OVRSpace GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__get_Space() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSpace, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__set_Boundary(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x8>(this->__instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__get_Boundary() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__set_PreviousBoundary(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x18>(this->__instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::__get_PreviousBoundary() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x18>(this->__instance);
}
 bool GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::HasBoundaryChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "HasBoundaryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::SetNaN(Unity::Collections::NativeArray_1<UnityEngine::Vector2> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "SetNaN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array);
}
 void GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.get_Width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.set_Width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)(float_t)>(&GlobalNamespace::OVRScenePlane::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.get_Height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.set_Height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)(float_t)>(&GlobalNamespace::OVRScenePlane::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.get_Dimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::get_Dimensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Dimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.get_Boundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<UnityEngine::Vector2> (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::get_Boundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.get_ScaleChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::get_ScaleChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2609c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_ScaleChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.set_ScaleChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)(bool)>(&GlobalNamespace::OVRScenePlane::set_ScaleChildren)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2609c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_ScaleChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.SetChildScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform, float_t, float_t)>(&GlobalNamespace::OVRScenePlane::SetChildScale)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2609c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "SetChildScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2609cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2609dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.IOVRSceneComponent_Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2609df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "IOVRSceneComponent.Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.ScheduleGetLengthJob
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2609f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "ScheduleGetLengthJob",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.RequestBoundary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::RequestBoundary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2609dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "RequestBoundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::Update)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x260a0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x260a774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRScenePlane._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScenePlane::*)()>(&GlobalNamespace::OVRScenePlane::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x260a888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IOVRSceneComponent
constexpr  GlobalNamespace::OVRScenePlane::operator GlobalNamespace::IOVRSceneComponent() const noexcept {
return GlobalNamespace::IOVRSceneComponent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__Width_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRScenePlane::__get__Width_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__Height_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRScenePlane::__get__Height_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__scaleChildren(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRScenePlane::__get__scaleChildren() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__jobHandle(System::Nullable_1<Unity::Jobs::JobHandle> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<Unity::Jobs::JobHandle>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<Unity::Jobs::JobHandle>>(value));
}
constexpr System::Nullable_1<Unity::Jobs::JobHandle> GlobalNamespace::OVRScenePlane::__get__jobHandle() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<Unity::Jobs::JobHandle>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__previousBoundary(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> GlobalNamespace::OVRScenePlane::__get__previousBoundary() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__boundaryLength(Unity::Collections::NativeArray_1<int32_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<int32_t> GlobalNamespace::OVRScenePlane::__get__boundaryLength() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__boundaryBuffer(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> GlobalNamespace::OVRScenePlane::__get__boundaryBuffer() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Vector2>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__boundaryRequested(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRScenePlane::__get__boundaryRequested() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__sceneAnchor(GlobalNamespace::OVRSceneAnchor value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSceneAnchor, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRSceneAnchor>(value));
}
constexpr GlobalNamespace::OVRSceneAnchor GlobalNamespace::OVRScenePlane::__get__sceneAnchor() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSceneAnchor, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRScenePlane::__set__boundary(System::Collections::Generic::List_1<UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector2>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector2>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector2> GlobalNamespace::OVRScenePlane::__get__boundary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector2>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::OVRScenePlane::get_Width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::set_Width(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_Width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::OVRScenePlane::get_Height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::set_Height(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_Height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 GlobalNamespace::OVRScenePlane::get_Dimensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Dimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<UnityEngine::Vector2> GlobalNamespace::OVRScenePlane::get_Boundary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_Boundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<UnityEngine::Vector2>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRScenePlane::get_ScaleChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "get_ScaleChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::set_ScaleChildren(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "set_ScaleChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRScenePlane::SetChildScale(UnityEngine::Transform parentTransform, float_t width, float_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "SetChildScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parentTransform, width, height);
}
 void GlobalNamespace::OVRScenePlane::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "IOVRSceneComponent.Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "ScheduleGetLengthJob",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::RequestBoundary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "RequestBoundary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRScenePlane::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::OVRScenePlane::OVRScenePlane()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OVRScenePlane>())) {}
 void GlobalNamespace::OVRScenePlane::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRScenePlane>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
