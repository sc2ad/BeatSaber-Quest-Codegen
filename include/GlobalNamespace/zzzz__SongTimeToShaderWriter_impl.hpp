#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SongTimeToShaderWriter_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x21b0cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongTimeToShaderWriter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongTimeToShaderWriter::*)()>(&::GlobalNamespace::SongTimeToShaderWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b0efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SongTimeToShaderWriter::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAudioTimeSource>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource ::GlobalNamespace::SongTimeToShaderWriter::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SongTimeToShaderWriter::__set__songTimePropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_songTimePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::SongTimeToShaderWriter::__get__songTimePropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_songTimePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get>();
}
 void ::GlobalNamespace::SongTimeToShaderWriter::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SongTimeToShaderWriter::SongTimeToShaderWriter()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SongTimeToShaderWriter>())) {}
 void ::GlobalNamespace::SongTimeToShaderWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongTimeToShaderWriter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
