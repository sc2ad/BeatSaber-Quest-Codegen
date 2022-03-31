// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JContainer
#include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Skipping declaration: IList`1 because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Skipping declaration: JToken because it is already included!
  // Forward declaring type: JsonLoadSettings
  class JsonLoadSettings;
  // Skipping declaration: JTokenType because it is already included!
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JConstructor
  class JConstructor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JConstructor*, "Newtonsoft.Json.Linq", "JConstructor");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JConstructor
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 122BD3C
  // [PreserveAttribute] Offset: FFFFFFFF
  class JConstructor : public ::Newtonsoft::Json::Linq::JContainer {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _name
    // Size: 0x8
    // Offset: 0x48
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> _values
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*) == 0x8);
    public:
    // Get instance field reference: private System.String _name
    ::StringW& dyn__name();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> _values
    ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& dyn__values();
    // public System.String get_Name()
    // Offset: 0x1710D18
    ::StringW get_Name();
    // public System.Void .ctor(Newtonsoft.Json.Linq.JConstructor other)
    // Offset: 0x1710D94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JConstructor* New_ctor(::Newtonsoft::Json::Linq::JConstructor* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JConstructor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JConstructor*, creationType>(other)));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x1710E24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JConstructor* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JConstructor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JConstructor*, creationType>(name)));
    }
    // static public Newtonsoft.Json.Linq.JConstructor Load(Newtonsoft.Json.JsonReader reader, Newtonsoft.Json.Linq.JsonLoadSettings settings)
    // Offset: 0x17112F0
    static ::Newtonsoft::Json::Linq::JConstructor* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);
    // protected override System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> get_ChildrenTokens()
    // Offset: 0x1710CB0
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> JContainer::get_ChildrenTokens()
    ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();
    // public override Newtonsoft.Json.Linq.JTokenType get_Type()
    // Offset: 0x1710D20
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JTokenType JToken::get_Type()
    ::Newtonsoft::Json::Linq::JTokenType get_Type();
    // public System.Void .ctor()
    // Offset: 0x1710D28
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Void JContainer::.ctor()
    // Base method: System.Void JToken::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JConstructor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JConstructor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JConstructor*, creationType>()));
    }
    // override System.Int32 IndexOfItem(Newtonsoft.Json.Linq.JToken item)
    // Offset: 0x1710CB8
    // Implemented from: Newtonsoft.Json.Linq.JContainer
    // Base method: System.Int32 JContainer::IndexOfItem(Newtonsoft.Json.Linq.JToken item)
    int IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);
    // override System.Boolean DeepEquals(Newtonsoft.Json.Linq.JToken node)
    // Offset: 0x1710F24
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Boolean JToken::DeepEquals(Newtonsoft.Json.Linq.JToken node)
    bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);
    // override Newtonsoft.Json.Linq.JToken CloneToken()
    // Offset: 0x1710FE4
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JToken JToken::CloneToken()
    ::Newtonsoft::Json::Linq::JToken* CloneToken();
    // public override System.Void WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    // Offset: 0x1711044
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Void JToken::WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);
    // override System.Int32 GetDeepHashCode()
    // Offset: 0x17112AC
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Int32 JToken::GetDeepHashCode()
    int GetDeepHashCode();
  }; // Newtonsoft.Json.Linq.JConstructor
  #pragma pack(pop)
  static check_size<sizeof(JConstructor), 80 + sizeof(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*)> __Newtonsoft_Json_Linq_JConstructorSizeCheck;
  static_assert(sizeof(JConstructor) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JConstructor::*)()>(&Newtonsoft::Json::Linq::JConstructor::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JConstructor* (*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*)>(&Newtonsoft::Json::Linq::JConstructor::Load)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JsonLoadSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, settings});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens
// Il2CppName: get_ChildrenTokens
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* (Newtonsoft::Json::Linq::JConstructor::*)()>(&Newtonsoft::Json::Linq::JConstructor::get_ChildrenTokens)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "get_ChildrenTokens", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (Newtonsoft::Json::Linq::JConstructor::*)()>(&Newtonsoft::Json::Linq::JConstructor::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::IndexOfItem
// Il2CppName: IndexOfItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JConstructor::IndexOfItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "IndexOfItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::DeepEquals
// Il2CppName: DeepEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JConstructor::DeepEquals)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "DeepEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::CloneToken
// Il2CppName: CloneToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JConstructor::*)()>(&Newtonsoft::Json::Linq::JConstructor::CloneToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "CloneToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JConstructor::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&Newtonsoft::Json::Linq::JConstructor::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* converters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, converters});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JConstructor::GetDeepHashCode
// Il2CppName: GetDeepHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JConstructor::*)()>(&Newtonsoft::Json::Linq::JConstructor::GetDeepHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JConstructor*), "GetDeepHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
