#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__GradientSettings_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientSettingsAtlas_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GradientRemap_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture.WriteRawInt2Packed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::*)(int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::WriteRawInt2Packed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d14d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture>::get(),
                            "WriteRawInt2Packed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture.WriteRawFloat4Packed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::*)(float_t, float_t, float_t, float_t, int32_t, int32_t)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::WriteRawFloat4Packed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d14cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture>::get(),
                            "WriteRawFloat4Packed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<UnityEngine::Color32>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture(::ArrayW<UnityEngine::Color32> rgba, int32_t width, int32_t height) noexcept : ::bs_hook::ValueTypeWrapper() {this->rgba = rgba;
this->width = width;
this->height = height;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__set_rgba(::ArrayW<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Color32>, 0x0>(this->__instance, std::forward<::ArrayW<UnityEngine::Color32>>(value));
}
constexpr ::ArrayW<UnityEngine::Color32> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__get_rgba() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Color32>, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__set_width(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__set_height(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::WriteRawInt2Packed(int32_t v0, int32_t v1, int32_t destX, int32_t destY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture>::get(),
                            "WriteRawInt2Packed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, v0, v1, destX, destY);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture::WriteRawFloat4Packed(float_t f0, float_t f1, float_t f2, float_t f3, int32_t destX, int32_t destY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture>::get(),
                            "WriteRawFloat4Packed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, f0, f1, f2, f3, destX, destY);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d14554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d14560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d145cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UIR::GradientSettingsAtlas),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d14644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d14674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_atlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::Alloc (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(int32_t)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d14748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(UnityEngine::UIElements::UIR::Alloc, ::ArrayW<UnityEngine::UIElements::GradientSettings>, UnityEngine::UIElements::UIR::GradientRemap)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2d14834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Alloc>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UIElements::GradientSettings>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::GradientRemap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.get_MustCommit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_MustCommit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.set_MustCommit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)(bool)>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d14e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "set_MustCommit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.Commit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d14e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::GradientSettingsAtlas.PrepareAtlas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientSettingsAtlas::*)()>(&UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2d14e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "PrepareAtlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UIElements::UIR::GradientSettingsAtlas::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_s_MarkerWrite(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_s_MarkerWrite()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerWrite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>();
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_s_MarkerCommit(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerCommit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_s_MarkerCommit()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerCommit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>();
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_ElemWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_ElemWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Allocator(UnityEngine::UIElements::UIR::BestFitAllocator value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BestFitAllocator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::BestFitAllocator>(value));
}
constexpr UnityEngine::UIElements::UIR::BestFitAllocator UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Allocator() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BestFitAllocator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_Atlas(UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture2D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Texture2D>(value));
}
constexpr UnityEngine::Texture2D UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_Atlas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture2D, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_m_RawAtlas(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture>(value));
}
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_m_RawAtlas() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set_s_TextureCounter(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_TextureCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get_s_TextureCounter()  {
return ::cordl_internals::getStaticField<int32_t, "s_TextureCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get>();
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set__disposed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::GradientSettingsAtlas::__set__MustCommit_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::__get__MustCommit_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_disposed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
/// @param length: int32_t (default: 4096)
 UnityEngine::UIElements::UIR::GradientSettingsAtlas UnityEngine::UIElements::UIR::GradientSettingsAtlas::New_ctor(int32_t length)  {
UnityEngine::UIElements::UIR::GradientSettingsAtlas o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::UIR::GradientSettingsAtlas>(length))};
return o;
}
/// @param length: int32_t (default: 4096)
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::_ctor(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, length);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Texture2D UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_atlas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_atlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GradientSettingsAtlas::Add(int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::Alloc, false>(const_cast<void*>(instance), ___internal_method, count);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Write(UnityEngine::UIElements::UIR::Alloc alloc, ::ArrayW<UnityEngine::UIElements::GradientSettings> settings, UnityEngine::UIElements::UIR::GradientRemap remap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Alloc>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UIElements::GradientSettings>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::GradientRemap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alloc, settings, remap);
}
 bool UnityEngine::UIElements::UIR::GradientSettingsAtlas::get_MustCommit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "get_MustCommit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::set_MustCommit(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "set_MustCommit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::Commit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "Commit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::GradientSettingsAtlas::PrepareAtlas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::GradientSettingsAtlas>::get(),
                            "PrepareAtlas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
