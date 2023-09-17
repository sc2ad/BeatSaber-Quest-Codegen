#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__MeshValidation_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Triangle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy  ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy::Resize{0};
constexpr ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy  ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy::Nullify{1};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::*)()>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a27ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c._EnsureFacesAreComposedOfContiguousTriangles_b__4_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::*)(::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a27de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c._EnsureFacesAreComposedOfContiguousTriangles_b__4_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::*)(::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a27e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c._RemoveUnusedVertices_b__7_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t> (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_RemoveUnusedVertices_b__7_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a27e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<RemoveUnusedVertices>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__set___9(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c value)  {
::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>(std::forward<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>(value));
}
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__get___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__set___9__4_0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__get___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__4_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__set___9__4_1(::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__get___9__4_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>();
}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__set___9__7_0(::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>> value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>(std::forward<::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>>>(value));
}
 ::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::__get___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Face,::System::Collections::Generic::IEnumerable_1<int32_t>>, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get>();
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>())) {}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_0(::UnityEngine::ProBuilder::Triangle x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<EnsureFacesAreComposedOfContiguousTriangles>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_EnsureFacesAreComposedOfContiguousTriangles_b__4_1(::UnityEngine::ProBuilder::Triangle x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<EnsureFacesAreComposedOfContiguousTriangles>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::System::Collections::Generic::IEnumerable_1<int32_t> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c::_RemoveUnusedVertices_b__7_0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c>::get(),
                            "<RemoveUnusedVertices>b__7_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::*)()>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a260d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0._CollectFaceGroups_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::*)(::UnityEngine::ProBuilder::Triangle)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::_CollectFaceGroups_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a27e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0>::get(),
                            "<CollectFaceGroups>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::__set_triangle(::UnityEngine::ProBuilder::Triangle value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::Triangle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::Triangle>(value));
}
constexpr ::UnityEngine::ProBuilder::Triangle ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::__get_triangle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::Triangle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::__set___9__0(::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>>(value));
}
constexpr ::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool> ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::__get___9__0() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::ProBuilder::Triangle,bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0>())) {}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0::_CollectFaceGroups_b__0(::UnityEngine::ProBuilder::Triangle x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass5_0>::get(),
                            "<CollectFaceGroups>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Triangle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::*)()>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a274bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0._RebuildSelectionIndexes_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::*)(::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::_RebuildSelectionIndexes_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a27e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0>::get(),
                            "<RebuildSelectionIndexes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::__set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::ProBuilderMesh>(value));
}
constexpr ::UnityEngine::ProBuilder::ProBuilderMesh ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::__get_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::ProBuilderMesh, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0>())) {}
 void ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0::_RebuildSelectionIndexes_b__0(::UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation____c__DisplayClass10_0>::get(),
                            "<RebuildSelectionIndexes>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a24f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x2a24f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsDegenerateTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2a25388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.ContainsNonContiguousTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a254dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsNonContiguousTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureFacesAreComposedOfContiguousTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x2a25614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureFacesAreComposedOfContiguousTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.CollectFaceGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>> (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::UnityEngine::ProBuilder::Face)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2a25d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "CollectFaceGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveDegenerateTriangles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles)> {
  constexpr static std::size_t size = 0x954;
  constexpr static std::size_t addrs = 0x2a260d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RemoveDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RemoveUnusedVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2a22da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RemoveUnusedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildIndexes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<int32_t> (*)(::System::Collections::Generic::IEnumerable_1<int32_t>, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2a26a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildEdges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>, ::System::Collections::Generic::List_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x2a26e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.RebuildSelectionIndexes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face>>, ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>>, ByRef<::ArrayW<int32_t>>, ::System::Collections::Generic::IEnumerable_1<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2a272dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildSelectionIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureMeshIsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::ProBuilder::ProBuilderMesh, ByRef<int32_t>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2a274c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureMeshIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2a2781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a279dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureRealNumbers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2a27ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::MeshValidation.EnsureValidAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh)>(&::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a27604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureValidAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, faces);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, face);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "ContainsNonContiguousTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, face);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face> ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureFacesAreComposedOfContiguousTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face>, false>(nullptr, ___internal_method, mesh, faces);
}
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>> ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "CollectFaceGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>>, false>(nullptr, ___internal_method, mesh, face);
}
/// @param removed: ::System::Collections::Generic::List_1<int32_t> (default: csnull)
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<int32_t> removed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RemoveDegenerateTriangles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removed);
}
/// @param removed: ::System::Collections::Generic::List_1<int32_t> (default: csnull)
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::List_1<int32_t> removed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RemoveUnusedVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removed);
}
 ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildIndexes(::System::Collections::Generic::IEnumerable_1<int32_t> indices, ::System::Collections::Generic::List_1<int32_t> removed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>, false>(nullptr, ___internal_method, indices, removed);
}
 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge> edges, ::System::Collections::Generic::List_1<int32_t> removed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildEdges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>, false>(nullptr, ___internal_method, edges, removed);
}
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<::ArrayW<::UnityEngine::ProBuilder::Face>> faces, ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>> edges, ByRef<::ArrayW<int32_t>> indices, ::System::Collections::Generic::IEnumerable_1<int32_t> removed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "RebuildSelectionIndexes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Face>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::ProBuilder::Edge>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, faces, edges, indices, removed);
}
 bool ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<int32_t> removedVertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureMeshIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mesh, removedVertices);
}
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector3> attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureRealNumbers(::System::Collections::Generic::IList_1<::UnityEngine::Vector4> attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureRealNumbers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Vector4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
/// @param strategy: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy (default: 1)
/// @param fill: T (default: csnull)
template<typename T>
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureArraySize(ByRef<::ArrayW<T>> attribute, int32_t expectedVertexCount, ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy strategy, T fill)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                        "EnsureArraySize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
/// @param strategy: ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy (default: 1)
/// @param fill: T (default: csnull)
template<typename T>
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureListSize(ByRef<::System::Collections::Generic::List_1<T>> attribute, int32_t expectedVertexCount, ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy strategy, T fill)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                        "EnsureListSize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__MeshValidation__AttributeValidationStrategy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute, expectedVertexCount, strategy, fill);
}
 void ::UnityEngine::ProBuilder::MeshOperations::MeshValidation::EnsureValidAttributes(::UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::MeshValidation>::get(),
                            "EnsureValidAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
} // end anonymous namespace
