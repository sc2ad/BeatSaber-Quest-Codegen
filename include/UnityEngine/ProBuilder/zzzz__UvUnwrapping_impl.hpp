#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__UvUnwrapping_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Bounds2D_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::*)()>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::ToString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x29ea8d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "translation", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::UnityEngine__ProBuilder__UvUnwrapping__UVTransform(UnityEngine::Vector2 translation, float_t rotation, UnityEngine::Vector2 scale) noexcept : ::bs_hook::ValueTypeWrapper() {this->translation = translation;
this->rotation = rotation;
this->scale = scale;
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__set_translation(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__get_translation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__set_rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__set_scale(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0xc>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::__get_scale() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0xc>(this->__instance);
}
 ::StringW UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::*)()>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29eaae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c._SetAutoUV_b__0_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::*)(UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::_SetAutoUV_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29eaae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get(),
                            "<SetAutoUV>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::__set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c value)  {
::cordl_internals::setStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get>(std::forward<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>(value));
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get>();
}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::__set___9__0_0(System::Func_2<UnityEngine::ProBuilder::Face,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::ProBuilder::Face,bool>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get>(std::forward<System::Func_2<UnityEngine::ProBuilder::Face,bool>>(value));
}
 System::Func_2<UnityEngine::ProBuilder::Face,bool> UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::__get___9__0_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::ProBuilder::Face,bool>, "<>9__0_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get>();
}
// Ctor Parameters []
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::UnityEngine__ProBuilder__UvUnwrapping____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ProBuilder__UvUnwrapping____c>())) {}
 void UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c::_SetAutoUV_b__0_0(UnityEngine::ProBuilder::Face x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping____c>::get(),
                            "<SetAutoUV>b__0_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.SetAutoUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, ::ArrayW<UnityEngine::ProBuilder::Face>, bool)>(&UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x29e88f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "SetAutoUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.SetAutoAndAlignUnwrapParamsToUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>)>(&UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x29e8a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "SetAutoAndAlignUnwrapParamsToUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.GetAutoUnwrapSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::AutoUnwrapSettings (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29e90a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetAutoUnwrapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.GetUVTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x29e91a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetUVTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.GetIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::Collections::Generic::IList_1<int32_t>, int32_t)>(&UnityEngine::ProBuilder::UvUnwrapping::GetIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x29e92b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.CalculateDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>, System::Collections::Generic::IList_1<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>)>(&UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x29e8c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "CalculateDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.GetRotatedSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(System::Collections::Generic::IList_1<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>, UnityEngine::Vector2, float_t)>(&UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x29e9360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetRotatedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.Unwrap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Face, UnityEngine::Vector3)>(&UnityEngine::ProBuilder::UvUnwrapping::Unwrap)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x29e0df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.CopyUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, UnityEngine::ProBuilder::Face, UnityEngine::ProBuilder::Face)>(&UnityEngine::ProBuilder::UvUnwrapping::CopyUVs)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29e0f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "CopyUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.ProjectTextureGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh, int32_t, UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x29e9f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ProjectTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.ApplyUVSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>, UnityEngine::ProBuilder::AutoUnwrapSettings)>(&UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x29e965c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ApplyUVSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.ScaleUVs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>, UnityEngine::Vector2, UnityEngine::ProBuilder::Bounds2D)>(&UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x29ea0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ScaleUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Bounds2D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.ApplyUVAnchor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<UnityEngine::Vector2>, System::Collections::Generic::IList_1<int32_t>, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor)>(&UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x29ea2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ApplyUVAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ProBuilder::UvUnwrapping.UpgradeAutoUVScaleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ProBuilder::ProBuilderMesh)>(&UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x29ea694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "UpgradeAutoUVScaleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::ProBuilder::UvUnwrapping::__set_s_UVTransformProjectionBuffer(System::Collections::Generic::List_1<UnityEngine::Vector2> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::Vector2>, "s_UVTransformProjectionBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::Vector2>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::Vector2> UnityEngine::ProBuilder::UvUnwrapping::__get_s_UVTransformProjectionBuffer()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::Vector2>, "s_UVTransformProjectionBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>();
}
 void UnityEngine::ProBuilder::UvUnwrapping::__set_s_TempVector2(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_TempVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::__get_s_TempVector2()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_TempVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>();
}
 void UnityEngine::ProBuilder::UvUnwrapping::__set_s_IndexBuffer(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<int32_t>, "s_IndexBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>(std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
 System::Collections::Generic::List_1<int32_t> UnityEngine::ProBuilder::UvUnwrapping::__get_s_IndexBuffer()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<int32_t>, "s_IndexBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get>();
}
 void UnityEngine::ProBuilder::UvUnwrapping::SetAutoUV(UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<UnityEngine::ProBuilder::Face> faces, bool auto)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "SetAutoUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ProBuilder::Face>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, faces, auto);
}
 void UnityEngine::ProBuilder::UvUnwrapping::SetAutoAndAlignUnwrapParamsToUVs(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> facesToConvert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "SetAutoAndAlignUnwrapParamsToUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, facesToConvert);
}
 UnityEngine::ProBuilder::AutoUnwrapSettings UnityEngine::ProBuilder::UvUnwrapping::GetAutoUnwrapSettings(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetAutoUnwrapSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::AutoUnwrapSettings, false>(nullptr, ___internal_method, mesh, face);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform UnityEngine::ProBuilder::UvUnwrapping::GetUVTransform(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetUVTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform, false>(nullptr, ___internal_method, mesh, face);
}
 int32_t UnityEngine::ProBuilder::UvUnwrapping::GetIndex(System::Collections::Generic::IList_1<int32_t> collection, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, collection, index);
}
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform UnityEngine::ProBuilder::UvUnwrapping::CalculateDelta(System::Collections::Generic::IList_1<UnityEngine::Vector2> src, System::Collections::Generic::IList_1<int32_t> srcIndices, System::Collections::Generic::IList_1<UnityEngine::Vector2> dst, System::Collections::Generic::IList_1<int32_t> dstIndices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "CalculateDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ProBuilder::UnityEngine__ProBuilder__UvUnwrapping__UVTransform, false>(nullptr, ___internal_method, src, srcIndices, dst, dstIndices);
}
 UnityEngine::Vector2 UnityEngine::ProBuilder::UvUnwrapping::GetRotatedSize(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indices, UnityEngine::Vector2 center, float_t rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "GetRotatedSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, points, indices, center, rotation);
}
/// @param projection: UnityEngine::Vector3 (default: {})
 void UnityEngine::ProBuilder::UvUnwrapping::Unwrap(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face, UnityEngine::Vector3 projection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "Unwrap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, face, projection);
}
 void UnityEngine::ProBuilder::UvUnwrapping::CopyUVs(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face source, UnityEngine::ProBuilder::Face dest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "CopyUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Face>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, source, dest);
}
 void UnityEngine::ProBuilder::UvUnwrapping::ProjectTextureGroup(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t group, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ProjectTextureGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, group, unwrapSettings);
}
 void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVSettings(::ArrayW<UnityEngine::Vector2> uvs, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ApplyUVSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::AutoUnwrapSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, uvSettings);
}
 void UnityEngine::ProBuilder::UvUnwrapping::ScaleUVs(::ArrayW<UnityEngine::Vector2> uvs, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::Vector2 scale, UnityEngine::ProBuilder::Bounds2D bounds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ScaleUVs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::Bounds2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, scale, bounds);
}
 void UnityEngine::ProBuilder::UvUnwrapping::ApplyUVAnchor(::ArrayW<UnityEngine::Vector2> uvs, System::Collections::Generic::IList_1<int32_t> indexes, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor anchor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "ApplyUVAnchor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, uvs, indexes, anchor);
}
 void UnityEngine::ProBuilder::UvUnwrapping::UpgradeAutoUVScaleOffset(UnityEngine::ProBuilder::ProBuilderMesh mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::UvUnwrapping>::get(),
                            "UpgradeAutoUVScaleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ProBuilder::ProBuilderMesh>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh);
}
