// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionObject
#include "Newtonsoft/Json/Utilities/ReflectionObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_0");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionObject/Newtonsoft.Json.Utilities.<>c__DisplayClass13_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionObject::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Func`1<System.Object> ctor
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_1<::Il2CppObject*>* ctor;
    // Field size check
    static_assert(sizeof(::System::Func_1<::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_1<::Il2CppObject*>*
    constexpr operator ::System::Func_1<::Il2CppObject*>*() const noexcept {
      return ctor;
    }
    // Get instance field reference: public System.Func`1<System.Object> ctor
    [[deprecated("Use field access instead!")]] ::System::Func_1<::Il2CppObject*>*& dyn_ctor();
    // public System.Void .ctor()
    // Offset: 0x212819C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionObject::$$c__DisplayClass13_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionObject::$$c__DisplayClass13_0*, creationType>()));
    }
    // System.Object <Create>b__0(System.Object[] args)
    // Offset: 0x2128654
    ::Il2CppObject* $Create$b__0(::ArrayW<::Il2CppObject*> args);
  }; // Newtonsoft.Json.Utilities.ReflectionObject/Newtonsoft.Json.Utilities.<>c__DisplayClass13_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionObject::$$c__DisplayClass13_0), 16 + sizeof(::System::Func_1<::Il2CppObject*>*)> __Newtonsoft_Json_Utilities_ReflectionObject_$$c__DisplayClass13_0SizeCheck;
  static_assert(sizeof(ReflectionObject::$$c__DisplayClass13_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0::$Create$b__0
// Il2CppName: <Create>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0::*)(::ArrayW<::Il2CppObject*>)>(&Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0::$Create$b__0)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionObject::$$c__DisplayClass13_0*), "<Create>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
