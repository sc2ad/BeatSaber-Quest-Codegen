// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_ParmInfo
#include "HoudiniEngineUnity/HAPI_ParmInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_ParmInfo
  class Test_HAPI_ParmInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_ParmInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_ParmInfo*, "HoudiniEngineUnity", "Test_HAPI_ParmInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_ParmInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_ParmInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*/ {
    public:
    public:
    // public HoudiniEngineUnity.HAPI_ParmInfo self
    // Size: 0x90
    // Offset: 0x10
    ::HoudiniEngineUnity::HAPI_ParmInfo self;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_ParmInfo) == 0x90);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*>(this);
    }
    // Creating interface conversion operator: i_Test_HAPI_ParmInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>* i_Test_HAPI_ParmInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*>(this);
    }
    // Creating conversion operator: operator ::HoudiniEngineUnity::HAPI_ParmInfo
    constexpr operator ::HoudiniEngineUnity::HAPI_ParmInfo() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_ParmInfo self
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_ParmInfo& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_ParmInfo self)
    // Offset: 0x1A68D04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_ParmInfo* New_ctor(::HoudiniEngineUnity::HAPI_ParmInfo self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_HAPI_ParmInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_ParmInfo*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_ParmInfo other)
    // Offset: 0x1A68D3C
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ParmInfo* other);
  }; // HoudiniEngineUnity.Test_HAPI_ParmInfo
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_ParmInfo), 16 + sizeof(::HoudiniEngineUnity::HAPI_ParmInfo)> __HoudiniEngineUnity_Test_HAPI_ParmInfoSizeCheck;
  static_assert(sizeof(Test_HAPI_ParmInfo) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_ParmInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_ParmInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_ParmInfo::*)(::HoudiniEngineUnity::Test_HAPI_ParmInfo*)>(&HoudiniEngineUnity::Test_HAPI_ParmInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_ParmInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_ParmInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
