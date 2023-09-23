#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::*)(float_t)>(&GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20ac89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::*)(float_t, float_t)>(&GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20ac8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::*)(float_t, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20ac8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "numberOfSolutions", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "solution1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "solution2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "solution3", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult(int32_t numberOfSolutions, float_t solution1, float_t solution2, float_t solution3) noexcept : ::bs_hook::ValueTypeWrapper() {this->numberOfSolutions = numberOfSolutions;
this->solution1 = solution1;
this->solution2 = solution2;
this->solution3 = solution3;
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__set_numberOfSolutions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__get_numberOfSolutions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__set_solution1(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__get_solution1() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__set_solution2(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__get_solution2() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__set_solution3(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::__get_solution3() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor(float_t solution1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, solution1);
}
 void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor(float_t solution1, float_t solution2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, solution1, solution2);
}
 void GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult::_ctor(float_t solution1, float_t solution2, float_t solution3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, solution1, solution2, solution3);
}
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSplineEvaluator::*)(GlobalNamespace::BezierSpline)>(&GlobalNamespace::BezierSplineEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20a6d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BezierSpline>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.EvaluatePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::EvaluatePosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20a4a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluatePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.Evaluate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::Evaluate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20abe2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.EvaluateFirstDerivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::EvaluateFirstDerivation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x20abf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluateFirstDerivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.EvaluateSecondDerivation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::EvaluateSecondDerivation)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20ac0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluateSecondDerivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.OffsetSegmentAndGetT
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::OffsetSegmentAndGetT)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x20abcdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "OffsetSegmentAndGetT",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.GetTForSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BezierSplineEvaluator::*)(int32_t, float_t)>(&GlobalNamespace::BezierSplineEvaluator::GetTForSegment)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x20ac340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "GetTForSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.GetTimeValuesForSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSplineEvaluator::*)(int32_t, ByRef<float_t>, ByRef<float_t>)>(&GlobalNamespace::BezierSplineEvaluator::GetTimeValuesForSegment)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x20ac7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "GetTimeValuesForSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.OffsetStartIndexToDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSplineEvaluator::*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::OffsetStartIndexToDistance)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x20ac220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "OffsetStartIndexToDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.CubeRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&GlobalNamespace::BezierSplineEvaluator::CubeRoot)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20ac868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "CubeRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSplineEvaluator.SolveCubic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult (*)(float_t, float_t, float_t, float_t)>(&GlobalNamespace::BezierSplineEvaluator::SolveCubic)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x20ac48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "SolveCubic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BezierSplineEvaluator::__set__segments(System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> GlobalNamespace::BezierSplineEvaluator::__get__segments() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BezierSplineEvaluator::__set__currentSegmentIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BezierSplineEvaluator::__get__currentSegmentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "spline", ty: "GlobalNamespace::BezierSpline", modifiers: "", def_value: None }]
 GlobalNamespace::BezierSplineEvaluator::BezierSplineEvaluator(GlobalNamespace::BezierSpline spline)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BezierSplineEvaluator>(spline))) {}
 void GlobalNamespace::BezierSplineEvaluator::_ctor(GlobalNamespace::BezierSpline spline)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BezierSpline>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, spline);
}
 UnityEngine::Vector3 GlobalNamespace::BezierSplineEvaluator::EvaluatePosition(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluatePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, time);
}
 UnityEngine::Vector3 GlobalNamespace::BezierSplineEvaluator::Evaluate(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "Evaluate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, t);
}
 UnityEngine::Vector3 GlobalNamespace::BezierSplineEvaluator::EvaluateFirstDerivation(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluateFirstDerivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, t);
}
 UnityEngine::Vector3 GlobalNamespace::BezierSplineEvaluator::EvaluateSecondDerivation(float_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "EvaluateSecondDerivation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, t);
}
 float_t GlobalNamespace::BezierSplineEvaluator::OffsetSegmentAndGetT(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "OffsetSegmentAndGetT",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 float_t GlobalNamespace::BezierSplineEvaluator::GetTForSegment(int32_t segmentIndex, float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "GetTForSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, segmentIndex, time);
}
 void GlobalNamespace::BezierSplineEvaluator::GetTimeValuesForSegment(int32_t segmentIndex, ByRef<float_t> t0Value, ByRef<float_t> t1Value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "GetTimeValuesForSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, segmentIndex, t0Value, t1Value);
}
 void GlobalNamespace::BezierSplineEvaluator::OffsetStartIndexToDistance(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "OffsetStartIndexToDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 float_t GlobalNamespace::BezierSplineEvaluator::CubeRoot(float_t x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "CubeRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, x);
}
 GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult GlobalNamespace::BezierSplineEvaluator::SolveCubic(float_t a, float_t b, float_t c, float_t d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSplineEvaluator>::get(),
                            "SolveCubic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult, false>(nullptr, ___internal_method, a, b, c, d);
}
