#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits.Apply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::*)(RootMotion::FinalIK::IKEffector, UnityEngine::Quaternion)>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::Apply)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x120aac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits.SpringAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::*)(float_t, float_t, float_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::SpringAxis)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x120ad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "SpringAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits.Spring
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::*)(float_t, float_t, bool)>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::Spring)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x120ada8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "Spring",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120adf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_effector(RootMotion::FinalIK::FullBodyBipedEffector value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::FullBodyBipedEffector>(value));
}
constexpr RootMotion::FinalIK::FullBodyBipedEffector RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_effector() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::FullBodyBipedEffector, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_spring(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_spring() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_x(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_x() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_y(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_y() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_z(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_z() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_minX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_minX() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_maxX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_maxX() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_minY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_minY() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_maxY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_maxY() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_minZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_minZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__set_maxZ(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::__get_maxZ() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::Apply(RootMotion::FinalIK::IKEffector e, UnityEngine::Quaternion rootRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "Apply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<RootMotion::FinalIK::IKEffector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e, rootRotation);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::SpringAxis(float_t value, float_t min, float_t max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "SpringAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value, min, max);
}
 float_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::Spring(float_t value, float_t limit, bool negative)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            "Spring",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, value, limit, negative);
}
// Ctor Parameters []
 RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::RootMotion__FinalIK__OffsetModifier__OffsetLimits()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__OffsetModifier__OffsetLimits>())) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)(int32_t)>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x120a9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x120adf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x120adfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120af4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x120af54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::*)()>(&RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120af94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__set___4__this(RootMotion::FinalIK::OffsetModifier value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::OffsetModifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::OffsetModifier>(value));
}
constexpr RootMotion::FinalIK::OffsetModifier RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::OffsetModifier, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::RootMotion__FinalIK__OffsetModifier___Initiate_d__8(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RootMotion__FinalIK__OffsetModifier___Initiate_d__8>(__1__state))) {}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier___Initiate_d__8>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::get_deltaTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x120741c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.OnModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::OnModifyOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::OffsetModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12077e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::OffsetModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.Initiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::Initiate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x120a964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.ModifyOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::ModifyOffset)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x120a9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "ModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.ApplyLimits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>)>(&RootMotion::FinalIK::OffsetModifier::ApplyLimits)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1209e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "ApplyLimits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x120ac2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(RootMotion::FinalIK::OffsetModifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::FinalIK::OffsetModifier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::OffsetModifier::*)()>(&RootMotion::FinalIK::OffsetModifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x120775c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::FinalIK::OffsetModifier::__set_weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::OffsetModifier::__get_weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::OffsetModifier::__set_ik(RootMotion::FinalIK::FullBodyBipedIK value)  {
::cordl_internals::setInstanceField<RootMotion::FinalIK::FullBodyBipedIK, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<RootMotion::FinalIK::FullBodyBipedIK>(value));
}
constexpr RootMotion::FinalIK::FullBodyBipedIK RootMotion::FinalIK::OffsetModifier::__get_ik() const {
return ::cordl_internals::getInstanceField<RootMotion::FinalIK::FullBodyBipedIK, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::FinalIK::OffsetModifier::__set_lastTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t RootMotion::FinalIK::OffsetModifier::__get_lastTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t RootMotion::FinalIK::OffsetModifier::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::OffsetModifier::OnModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "OnModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::OffsetModifier::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator RootMotion::FinalIK::OffsetModifier::Initiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "Initiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::OffsetModifier::ModifyOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "ModifyOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void RootMotion::FinalIK::OffsetModifier::ApplyLimits(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits> limits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "ApplyLimits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__OffsetModifier__OffsetLimits>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, limits);
}
 void RootMotion::FinalIK::OffsetModifier::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::FinalIK::OffsetModifier::OffsetModifier()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<OffsetModifier>())) {}
 void RootMotion::FinalIK::OffsetModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::FinalIK::OffsetModifier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
