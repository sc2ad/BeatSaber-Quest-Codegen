#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Events {
class ArgumentCache;
}
// Type: UnityEngine.Events::ArgumentCache
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10385))
// CS Name: UnityEngine.Events.ArgumentCache
class CORDL_TYPE ArgumentCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ArgumentCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: " const&", def_value: None }]
constexpr ArgumentCache(ArgumentCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "&&", def_value: None }]
constexpr ArgumentCache(ArgumentCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgumentCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ArgumentCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgumentCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgumentCache& operator=(ArgumentCache&& o) noexcept = default;
  constexpr ArgumentCache& operator=(ArgumentCache const& o) noexcept = default;
                


// Fields

 UnityEngine::Object __declspec(property(get=__get_m_ObjectArgument, put=__set_m_ObjectArgument))  m_ObjectArgument;

constexpr void __set_m_ObjectArgument(UnityEngine::Object value) ;

constexpr UnityEngine::Object __get_m_ObjectArgument() const;

 ::StringW __declspec(property(get=__get_m_ObjectArgumentAssemblyTypeName, put=__set_m_ObjectArgumentAssemblyTypeName))  m_ObjectArgumentAssemblyTypeName;

constexpr void __set_m_ObjectArgumentAssemblyTypeName(::StringW value) ;

constexpr ::StringW __get_m_ObjectArgumentAssemblyTypeName() const;

 int32_t __declspec(property(get=__get_m_IntArgument, put=__set_m_IntArgument))  m_IntArgument;

constexpr void __set_m_IntArgument(int32_t value) ;

constexpr int32_t __get_m_IntArgument() const;

 float_t __declspec(property(get=__get_m_FloatArgument, put=__set_m_FloatArgument))  m_FloatArgument;

constexpr void __set_m_FloatArgument(float_t value) ;

constexpr float_t __get_m_FloatArgument() const;

 ::StringW __declspec(property(get=__get_m_StringArgument, put=__set_m_StringArgument))  m_StringArgument;

constexpr void __set_m_StringArgument(::StringW value) ;

constexpr ::StringW __get_m_StringArgument() const;

 bool __declspec(property(get=__get_m_BoolArgument, put=__set_m_BoolArgument))  m_BoolArgument;

constexpr void __set_m_BoolArgument(bool value) ;

constexpr bool __get_m_BoolArgument() const;


// Properties

 UnityEngine::Object __declspec(property(get=get_unityObjectArgument))  unityObjectArgument;

 ::StringW __declspec(property(get=get_unityObjectArgumentAssemblyTypeName))  unityObjectArgumentAssemblyTypeName;

 int32_t __declspec(property(get=get_intArgument))  intArgument;

 float_t __declspec(property(get=get_floatArgument))  floatArgument;

 ::StringW __declspec(property(get=get_stringArgument))  stringArgument;

 bool __declspec(property(get=get_boolArgument))  boolArgument;


// Methods

/// @brief Method get_unityObjectArgument addr 0x2b7f260 size 0x8 virtual false final false
 UnityEngine::Object get_unityObjectArgument() ;

/// @brief Method get_unityObjectArgumentAssemblyTypeName addr 0x2b7f268 size 0x8 virtual false final false
 ::StringW get_unityObjectArgumentAssemblyTypeName() ;

/// @brief Method get_intArgument addr 0x2b7f270 size 0x8 virtual false final false
 int32_t get_intArgument() ;

/// @brief Method get_floatArgument addr 0x2b7f278 size 0x8 virtual false final false
 float_t get_floatArgument() ;

/// @brief Method get_stringArgument addr 0x2b7f280 size 0x8 virtual false final false
 ::StringW get_stringArgument() ;

/// @brief Method get_boolArgument addr 0x2b7f288 size 0x8 virtual false final false
 bool get_boolArgument() ;

/// @brief Method OnBeforeSerialize addr 0x2b7f290 size 0x1c virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2b7f2ac size 0x1c virtual true final true
 void OnAfterDeserialize() ;

static UnityEngine::Events::ArgumentCache New_ctor() ;

/// @brief Method .ctor addr 0x2b7f2c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::ArgumentCache);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::ArgumentCache, "UnityEngine.Events", "ArgumentCache");
