#pragma once
namespace {
#include "UnityEngine/ProBuilder/zzzz__ShapeFactory_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeFactory.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)(::System::Type, ::UnityEngine::ProBuilder::PivotLocation)>(&::UnityEngine::ProBuilder::ShapeFactory::Instantiate)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x29d8e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ShapeFactory>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ShapeFactory.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ProBuilderMesh (*)(::UnityEngine::ProBuilder::Shapes::Shape, ::UnityEngine::ProBuilder::PivotLocation)>(&::UnityEngine::ProBuilder::ShapeFactory::Instantiate)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x29d90e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ShapeFactory>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Shapes::Shape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get()}
                        )));
    return ___internal_method;
  }
};
/// @param pivotType: ::UnityEngine::ProBuilder::PivotLocation (default: 0)
template<typename T>
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ShapeFactory::Instantiate(::UnityEngine::ProBuilder::PivotLocation pivotType)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ShapeFactory>::get(),
                        "Instantiate",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, pivotType);
}
/// @param pivotType: ::UnityEngine::ProBuilder::PivotLocation (default: 0)
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ShapeFactory::Instantiate(::System::Type shapeType, ::UnityEngine::ProBuilder::PivotLocation pivotType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ShapeFactory>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, shapeType, pivotType);
}
/// @param pivotType: ::UnityEngine::ProBuilder::PivotLocation (default: 0)
 ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::ShapeFactory::Instantiate(::UnityEngine::ProBuilder::Shapes::Shape shape, ::UnityEngine::ProBuilder::PivotLocation pivotType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ShapeFactory>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Shapes::Shape>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::PivotLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ProBuilderMesh, false>(nullptr, ___internal_method, shape, pivotType);
}
} // end anonymous namespace
