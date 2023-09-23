#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "GlobalNamespace/zzzz__BezierCurve_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::*)(::ArrayW<float_t>, ::ArrayW<float_t>)>(&GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20abc24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "p2", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::GlobalNamespace__BezierSpline__ComputeControlPointsResults(::ArrayW<float_t> p1, ::ArrayW<float_t> p2) noexcept : ::bs_hook::ValueTypeWrapper() {this->p1 = p1;
this->p2 = p2;
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::__set_p1(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::__get_p1() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::__set_p2(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::__get_p2() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults::_ctor(::ArrayW<float_t> p1, ::ArrayW<float_t> p2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, p1, p2);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__BezierSpline____c::*)()>(&GlobalNamespace::GlobalNamespace__BezierSpline____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20abc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline____c._SortSourceData_b__6_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__BezierSpline____c::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::GlobalNamespace__BezierSpline____c::_SortSourceData_b__6_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20abc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<SortSourceData>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline____c._ComputeControlPoints_b__8_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BezierSpline____c::*)(UnityEngine::Vector3)>(&GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20abcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline____c._ComputeControlPoints_b__8_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BezierSpline____c::*)(UnityEngine::Vector3)>(&GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20abccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__BezierSpline____c._ComputeControlPoints_b__8_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__BezierSpline____c::*)(UnityEngine::Vector3)>(&GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20abcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::__set___9(GlobalNamespace::GlobalNamespace__BezierSpline____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__BezierSpline____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__BezierSpline____c>(value));
}
 GlobalNamespace::GlobalNamespace__BezierSpline____c GlobalNamespace::GlobalNamespace__BezierSpline____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__BezierSpline____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::__set___9__6_0(System::Comparison_1<UnityEngine::Vector3> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::Vector3>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>(std::forward<System::Comparison_1<UnityEngine::Vector3>>(value));
}
 System::Comparison_1<UnityEngine::Vector3> GlobalNamespace::GlobalNamespace__BezierSpline____c::__get___9__6_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::Vector3>, "<>9__6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::__set___9__8_0(System::Func_2<UnityEngine::Vector3,float_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>(std::forward<System::Func_2<UnityEngine::Vector3,float_t>>(value));
}
 System::Func_2<UnityEngine::Vector3,float_t> GlobalNamespace::GlobalNamespace__BezierSpline____c::__get___9__8_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::__set___9__8_1(System::Func_2<UnityEngine::Vector3,float_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>(std::forward<System::Func_2<UnityEngine::Vector3,float_t>>(value));
}
 System::Func_2<UnityEngine::Vector3,float_t> GlobalNamespace::GlobalNamespace__BezierSpline____c::__get___9__8_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::__set___9__8_2(System::Func_2<UnityEngine::Vector3,float_t> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>(std::forward<System::Func_2<UnityEngine::Vector3,float_t>>(value));
}
 System::Func_2<UnityEngine::Vector3,float_t> GlobalNamespace::GlobalNamespace__BezierSpline____c::__get___9__8_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::Vector3,float_t>, "<>9__8_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__BezierSpline____c::GlobalNamespace__BezierSpline____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__BezierSpline____c>())) {}
 void GlobalNamespace::GlobalNamespace__BezierSpline____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__BezierSpline____c::_SortSourceData_b__6_0(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<SortSourceData>b__6_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, point1, point2);
}
 float_t GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_0(UnityEngine::Vector3 p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 float_t GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_1(UnityEngine::Vector3 p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
 float_t GlobalNamespace::GlobalNamespace__BezierSpline____c::_ComputeControlPoints_b__8_2(UnityEngine::Vector3 p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__BezierSpline____c>::get(),
                            "<ComputeControlPoints>b__8_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, p);
}
//  Writing Method size for method: GlobalNamespace::BezierSpline.get_segments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::get_segments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20ab594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "get_segments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.AddPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)(float_t, UnityEngine::Vector2)>(&GlobalNamespace::BezierSpline::AddPoint)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x20a6544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "AddPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.SortSourceData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::SortSourceData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x20ab59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "SortSourceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.AddArtificialStartAndFinishPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x20a661c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "AddArtificialStartAndFinishPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.ComputeControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x20a6814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "ComputeControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x20abbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline.ComputeControlPoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults (GlobalNamespace::BezierSpline::*)(System::Collections::Generic::List_1<float_t>)>(&GlobalNamespace::BezierSpline::ComputeControlPoints)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x20ab69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "ComputeControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BezierSpline._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BezierSpline::*)()>(&GlobalNamespace::BezierSpline::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x20a6194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BezierSpline::__set__segments(System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> GlobalNamespace::BezierSpline::__get__segments() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BezierSpline::__set__sourceDataPoints(System::Collections::Generic::List_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Vector3>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> GlobalNamespace::BezierSpline::__get__sourceDataPoints() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> GlobalNamespace::BezierSpline::get_segments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "get_segments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<GlobalNamespace::BezierCurve>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BezierSpline::AddPoint(float_t distance, UnityEngine::Vector2 point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "AddPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance, point);
}
 void GlobalNamespace::BezierSpline::SortSourceData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "SortSourceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BezierSpline::AddArtificialStartAndFinishPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "AddArtificialStartAndFinishPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BezierSpline::ComputeControlPoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "ComputeControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BezierSpline::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults GlobalNamespace::BezierSpline::ComputeControlPoints(System::Collections::Generic::List_1<float_t> k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            "ComputeControlPoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BezierSpline__ComputeControlPointsResults, false>(const_cast<void*>(instance), ___internal_method, k);
}
// Ctor Parameters []
 GlobalNamespace::BezierSpline::BezierSpline()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BezierSpline>())) {}
 void GlobalNamespace::BezierSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BezierSpline>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
