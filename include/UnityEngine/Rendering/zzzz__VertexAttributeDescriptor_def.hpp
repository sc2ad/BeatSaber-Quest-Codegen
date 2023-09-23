#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
// Type: UnityEngine.Rendering::VertexAttributeDescriptor
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10281))
// CS Name: UnityEngine.Rendering.VertexAttributeDescriptor
struct CORDL_TYPE VertexAttributeDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::VertexAttributeDescriptor>() const;

// Ctor Parameters [CppParam { name: "_attribute_k__BackingField", ty: "UnityEngine::Rendering::VertexAttribute", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty: "UnityEngine::Rendering::VertexAttributeFormat", modifiers: "", def_value: None }, CppParam { name: "_dimension_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stream_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexAttributeDescriptor(UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField, UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField, int32_t _dimension_k__BackingField, int32_t _stream_k__BackingField) noexcept;


                    constexpr VertexAttributeDescriptor(VertexAttributeDescriptor const&) = default;
                    constexpr VertexAttributeDescriptor(VertexAttributeDescriptor&&) = default;
                    constexpr VertexAttributeDescriptor& operator=(VertexAttributeDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexAttributeDescriptor& operator=(VertexAttributeDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexAttributeDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Rendering::VertexAttribute __declspec(property(get=__get__attribute_k__BackingField, put=__set__attribute_k__BackingField))  _attribute_k__BackingField;

constexpr void __set__attribute_k__BackingField(UnityEngine::Rendering::VertexAttribute value) ;

constexpr UnityEngine::Rendering::VertexAttribute __get__attribute_k__BackingField() const;

 UnityEngine::Rendering::VertexAttributeFormat __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField))  _format_k__BackingField;

constexpr void __set__format_k__BackingField(UnityEngine::Rendering::VertexAttributeFormat value) ;

constexpr UnityEngine::Rendering::VertexAttributeFormat __get__format_k__BackingField() const;

 int32_t __declspec(property(get=__get__dimension_k__BackingField, put=__set__dimension_k__BackingField))  _dimension_k__BackingField;

constexpr void __set__dimension_k__BackingField(int32_t value) ;

constexpr int32_t __get__dimension_k__BackingField() const;

 int32_t __declspec(property(get=__get__stream_k__BackingField, put=__set__stream_k__BackingField))  _stream_k__BackingField;

constexpr void __set__stream_k__BackingField(int32_t value) ;

constexpr int32_t __get__stream_k__BackingField() const;


// Properties

 UnityEngine::Rendering::VertexAttribute __declspec(property(get=get_attribute, put=set_attribute))  attribute;

 UnityEngine::Rendering::VertexAttributeFormat __declspec(property(get=get_format, put=set_format))  format;

 int32_t __declspec(property(get=get_dimension, put=set_dimension))  dimension;

 int32_t __declspec(property(get=get_stream, put=set_stream))  stream;


// Methods

/// @brief Method get_attribute addr 0x2b73d90 size 0x8 virtual false final false
 UnityEngine::Rendering::VertexAttribute get_attribute() ;

/// @brief Method set_attribute addr 0x2b73d98 size 0x8 virtual false final false
 void set_attribute(UnityEngine::Rendering::VertexAttribute value) ;

/// @brief Method get_format addr 0x2b73da0 size 0x8 virtual false final false
 UnityEngine::Rendering::VertexAttributeFormat get_format() ;

/// @brief Method set_format addr 0x2b73da8 size 0x8 virtual false final false
 void set_format(UnityEngine::Rendering::VertexAttributeFormat value) ;

/// @brief Method get_dimension addr 0x2b73db0 size 0x8 virtual false final false
 int32_t get_dimension() ;

/// @brief Method set_dimension addr 0x2b73db8 size 0x8 virtual false final false
 void set_dimension(int32_t value) ;

/// @brief Method get_stream addr 0x2b73dc0 size 0x8 virtual false final false
 int32_t get_stream() ;

/// @brief Method set_stream addr 0x2b73dc8 size 0x8 virtual false final false
 void set_stream(int32_t value) ;

/// @brief Method .ctor addr 0x2b73dd0 size 0xc virtual false final false
 void _ctor(UnityEngine::Rendering::VertexAttribute attribute, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dimension, int32_t stream) ;

/// @brief Method ToString addr 0x2b73ddc size 0x1d4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2b73fb0 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b73fd8 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b74080 size 0x44 virtual true final true
 bool Equals(UnityEngine::Rendering::VertexAttributeDescriptor other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");
