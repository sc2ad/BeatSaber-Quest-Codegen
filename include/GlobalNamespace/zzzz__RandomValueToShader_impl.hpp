#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
//  Writing Method size for method: GlobalNamespace::RandomValueToShader.SetRandomValueToShaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomValueToShader::*)()>(&GlobalNamespace::RandomValueToShader::SetRandomValueToShaders)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1f98dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get(),
                            "SetRandomValueToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RandomValueToShader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomValueToShader::*)()>(&GlobalNamespace::RandomValueToShader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f98e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RandomValueToShader::__set__lastFrameNum(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::RandomValueToShader::__get__lastFrameNum() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::RandomValueToShader::__set__randomValueID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_randomValueID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get>(std::forward<int32_t>(value));
}
 int32_t GlobalNamespace::RandomValueToShader::__get__randomValueID()  {
return ::cordl_internals::getStaticField<int32_t, "_randomValueID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get>();
}
 void GlobalNamespace::RandomValueToShader::SetRandomValueToShaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get(),
                            "SetRandomValueToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::RandomValueToShader GlobalNamespace::RandomValueToShader::New_ctor()  {
GlobalNamespace::RandomValueToShader o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RandomValueToShader>())};
return o;
}
 void GlobalNamespace::RandomValueToShader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RandomValueToShader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
