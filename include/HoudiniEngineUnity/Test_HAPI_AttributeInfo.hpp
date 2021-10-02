// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: HoudiniEngineUnity.HAPI_AttributeInfo
#include "HoudiniEngineUnity/HAPI_AttributeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_AttributeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_HAPI_AttributeInfo : public ::Il2CppObject/*, public HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public HoudiniEngineUnity.HAPI_AttributeInfo self
    // Size: 0x24
    // Offset: 0x10
    HoudiniEngineUnity::HAPI_AttributeInfo self;
    // Field size check
    static_assert(sizeof(HoudiniEngineUnity::HAPI_AttributeInfo) == 0x24);
    public:
    // Creating interface conversion operator: operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo*>
    operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo*>() noexcept {
      return *reinterpret_cast<HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*>(this);
    }
    // Creating conversion operator: operator HoudiniEngineUnity::HAPI_AttributeInfo
    constexpr operator HoudiniEngineUnity::HAPI_AttributeInfo() const noexcept {
      return self;
    }
    // Get instance field reference: public HoudiniEngineUnity.HAPI_AttributeInfo self
    HoudiniEngineUnity::HAPI_AttributeInfo& dyn_self();
    // public System.Void .ctor(HoudiniEngineUnity.HAPI_AttributeInfo self)
    // Offset: 0x17095BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_HAPI_AttributeInfo* New_ctor(HoudiniEngineUnity::HAPI_AttributeInfo self) {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::Test_HAPI_AttributeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_HAPI_AttributeInfo*, creationType>(self)));
    }
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_HAPI_AttributeInfo other)
    // Offset: 0x17095F4
    bool IsEquivalentTo(HoudiniEngineUnity::Test_HAPI_AttributeInfo* other);
  }; // HoudiniEngineUnity.Test_HAPI_AttributeInfo
  #pragma pack(pop)
  static check_size<sizeof(Test_HAPI_AttributeInfo), 16 + sizeof(HoudiniEngineUnity::HAPI_AttributeInfo)> __HoudiniEngineUnity_Test_HAPI_AttributeInfoSizeCheck;
  static_assert(sizeof(Test_HAPI_AttributeInfo) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_AttributeInfo*, "HoudiniEngineUnity", "Test_HAPI_AttributeInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_AttributeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(HoudiniEngineUnity::Test_HAPI_AttributeInfo*)>(&HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_HAPI_AttributeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_AttributeInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
