#pragma once
namespace {
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PolygonSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Polygon_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x299b884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon)>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x299b900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::*)(::UnityEngine::ProBuilder::Poly2Tri::Polygon)>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x299ba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet.get_Polygons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> (::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::get_Polygons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299baac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            "get_Polygons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::__set__polygons(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::__get__polygons() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::PolygonSet()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PolygonSet>())) {}
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "poly", ty: "::UnityEngine::ProBuilder::Poly2Tri::Polygon", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::PolygonSet(::UnityEngine::ProBuilder::Poly2Tri::Polygon poly)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PolygonSet>(poly))) {}
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::_ctor(::UnityEngine::ProBuilder::Poly2Tri::Polygon poly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, poly);
}
 void ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::Add(::UnityEngine::ProBuilder::Poly2Tri::Polygon p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Poly2Tri::Polygon>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, p);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> ::UnityEngine::ProBuilder::Poly2Tri::PolygonSet::get_Polygons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Poly2Tri::PolygonSet>::get(),
                            "get_Polygons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
